#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -646148392490434275LL;
_Bool var_3 = (_Bool)0;
long long int var_7 = -2774958469795194902LL;
unsigned int var_9 = 33443579U;
signed char var_16 = (signed char)64;
int zero = 0;
unsigned char var_17 = (unsigned char)180;
_Bool var_18 = (_Bool)0;
int var_19 = -1046531563;
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
