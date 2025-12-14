#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1916609618;
unsigned char var_2 = (unsigned char)217;
unsigned char var_3 = (unsigned char)16;
signed char var_4 = (signed char)-88;
unsigned int var_6 = 3647414239U;
long long int var_7 = -4741367152959400694LL;
unsigned char var_8 = (unsigned char)31;
short var_9 = (short)15784;
unsigned char var_10 = (unsigned char)240;
unsigned long long int var_12 = 7379964797133218185ULL;
signed char var_13 = (signed char)-81;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
unsigned char var_19 = (unsigned char)159;
unsigned long long int var_20 = 9927607806034461992ULL;
long long int var_21 = 6641505579677808043LL;
unsigned char var_22 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
