#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4010883824U;
unsigned char var_2 = (unsigned char)158;
signed char var_4 = (signed char)-90;
unsigned int var_6 = 1875413372U;
int var_9 = -856698208;
unsigned short var_10 = (unsigned short)19390;
int zero = 0;
unsigned long long int var_16 = 14757286524842054164ULL;
short var_17 = (short)-852;
int var_18 = 870364392;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
