#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3508;
int var_3 = -2032811580;
signed char var_9 = (signed char)-66;
unsigned char var_13 = (unsigned char)96;
int var_14 = 1544876922;
int zero = 0;
unsigned short var_17 = (unsigned short)58625;
signed char var_18 = (signed char)12;
unsigned int var_19 = 972100626U;
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
