#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29409;
_Bool var_1 = (_Bool)1;
signed char var_8 = (signed char)-63;
unsigned char var_13 = (unsigned char)141;
unsigned char var_14 = (unsigned char)183;
int zero = 0;
long long int var_17 = -826152865745769191LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
