#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11134614264792312810ULL;
unsigned short var_3 = (unsigned short)14829;
unsigned short var_6 = (unsigned short)10258;
unsigned long long int var_9 = 741708134247434997ULL;
unsigned short var_13 = (unsigned short)1537;
unsigned short var_15 = (unsigned short)4684;
int zero = 0;
unsigned long long int var_19 = 10328111599523715366ULL;
signed char var_20 = (signed char)120;
signed char var_21 = (signed char)-86;
unsigned long long int var_22 = 16174604900071498484ULL;
long long int var_23 = 6735006853333487778LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
