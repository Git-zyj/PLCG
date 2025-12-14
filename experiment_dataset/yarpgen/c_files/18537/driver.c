#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3354667765955862106ULL;
_Bool var_1 = (_Bool)1;
int var_3 = -2110666566;
signed char var_4 = (signed char)-66;
unsigned char var_7 = (unsigned char)92;
long long int var_8 = -4226659642962252421LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 5598786442277330007ULL;
int zero = 0;
unsigned long long int var_13 = 12416900076277320144ULL;
unsigned char var_14 = (unsigned char)246;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)55902;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
