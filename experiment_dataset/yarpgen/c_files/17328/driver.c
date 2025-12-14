#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3293396696U;
unsigned long long int var_3 = 2517531182940582051ULL;
unsigned long long int var_4 = 8720315181403261270ULL;
unsigned short var_6 = (unsigned short)19244;
signed char var_7 = (signed char)-127;
unsigned int var_9 = 1793120551U;
unsigned short var_11 = (unsigned short)1405;
unsigned int var_12 = 3951646818U;
int var_14 = 1434052758;
int zero = 0;
unsigned long long int var_16 = 13885996576910246547ULL;
signed char var_17 = (signed char)-27;
unsigned short var_18 = (unsigned short)6193;
unsigned long long int var_19 = 18128478895026206028ULL;
unsigned long long int var_20 = 16304166132952457258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
