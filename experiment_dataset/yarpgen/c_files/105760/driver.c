#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3693666704U;
int var_8 = -843642821;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)6324;
int var_13 = -1656333794;
signed char var_14 = (signed char)-106;
long long int var_15 = -2818642084351933970LL;
unsigned short var_16 = (unsigned short)23201;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
