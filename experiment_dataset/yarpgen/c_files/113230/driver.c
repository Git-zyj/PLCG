#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)230;
int var_6 = -528352142;
_Bool var_9 = (_Bool)0;
long long int var_14 = -8467034986426062407LL;
long long int var_15 = -3760021948547379420LL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)22001;
unsigned char var_21 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
