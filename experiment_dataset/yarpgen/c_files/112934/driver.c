#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2915230404U;
unsigned char var_3 = (unsigned char)94;
int var_5 = 1429201038;
signed char var_6 = (signed char)26;
short var_8 = (short)19126;
unsigned char var_9 = (unsigned char)109;
unsigned char var_12 = (unsigned char)180;
int var_15 = -1079062236;
int zero = 0;
unsigned char var_16 = (unsigned char)20;
short var_17 = (short)1877;
unsigned char var_18 = (unsigned char)129;
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
