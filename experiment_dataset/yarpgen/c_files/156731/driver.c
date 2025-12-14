#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7212353788761939619LL;
unsigned short var_3 = (unsigned short)29779;
signed char var_5 = (signed char)-93;
unsigned long long int var_8 = 18203960614520693656ULL;
unsigned int var_10 = 2272233423U;
signed char var_11 = (signed char)-67;
signed char var_15 = (signed char)3;
signed char var_16 = (signed char)-73;
int zero = 0;
unsigned int var_18 = 3317462431U;
long long int var_19 = 5885544128771330073LL;
long long int var_20 = -5182600266605157231LL;
void init() {
}

void checksum() {
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
