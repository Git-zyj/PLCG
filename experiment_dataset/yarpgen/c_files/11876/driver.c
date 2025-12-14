#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64394;
unsigned short var_2 = (unsigned short)19035;
unsigned long long int var_3 = 11652976055754534383ULL;
unsigned short var_4 = (unsigned short)15679;
unsigned long long int var_8 = 7944827990495558854ULL;
unsigned long long int var_14 = 9206145786146530146ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)53756;
unsigned long long int var_21 = 11430570461680361609ULL;
unsigned short var_22 = (unsigned short)56646;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
