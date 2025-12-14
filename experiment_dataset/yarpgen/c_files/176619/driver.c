#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5423;
unsigned short var_5 = (unsigned short)44579;
_Bool var_7 = (_Bool)1;
int var_8 = -50048774;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 4691185662838341996ULL;
unsigned short var_14 = (unsigned short)2584;
unsigned short var_15 = (unsigned short)22266;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
