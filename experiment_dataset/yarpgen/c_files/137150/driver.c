#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3542;
unsigned int var_4 = 3559894894U;
unsigned short var_6 = (unsigned short)62829;
unsigned long long int var_7 = 9264748040843228728ULL;
unsigned char var_9 = (unsigned char)66;
unsigned long long int var_10 = 14614150984529562384ULL;
unsigned char var_11 = (unsigned char)165;
unsigned short var_14 = (unsigned short)35521;
int zero = 0;
unsigned short var_18 = (unsigned short)3213;
unsigned long long int var_19 = 5590574409857638353ULL;
unsigned long long int var_20 = 5621327180055227761ULL;
signed char var_21 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
