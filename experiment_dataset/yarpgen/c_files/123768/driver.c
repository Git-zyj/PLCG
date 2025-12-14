#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9077318296910124931ULL;
long long int var_7 = -1267232915696292680LL;
unsigned char var_11 = (unsigned char)244;
unsigned char var_12 = (unsigned char)198;
signed char var_14 = (signed char)-91;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-26776;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
unsigned long long int var_20 = 2843270943067884111ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
