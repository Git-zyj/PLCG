#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 49863157U;
unsigned short var_8 = (unsigned short)8591;
unsigned long long int var_11 = 4737349164213424686ULL;
unsigned int var_12 = 927776702U;
int var_13 = 1161512033;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
short var_16 = (short)18262;
unsigned short var_17 = (unsigned short)5363;
short var_18 = (short)-12581;
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
