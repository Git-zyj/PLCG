#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39308;
unsigned long long int var_2 = 11059350287758172892ULL;
long long int var_4 = -8471607907494628127LL;
long long int var_5 = 465408993361539357LL;
unsigned char var_7 = (unsigned char)12;
int var_8 = -1323625889;
unsigned char var_9 = (unsigned char)67;
signed char var_10 = (signed char)71;
int zero = 0;
short var_12 = (short)3056;
unsigned char var_13 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
