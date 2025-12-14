#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11318;
signed char var_2 = (signed char)-52;
unsigned long long int var_3 = 9019539675975127373ULL;
short var_5 = (short)18545;
signed char var_7 = (signed char)44;
unsigned int var_8 = 3947066525U;
int zero = 0;
unsigned char var_12 = (unsigned char)228;
unsigned char var_13 = (unsigned char)70;
int var_14 = -651637183;
short var_15 = (short)-31129;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
