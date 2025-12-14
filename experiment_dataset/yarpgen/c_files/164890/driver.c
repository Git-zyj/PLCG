#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned long long int var_2 = 8276587540231246706ULL;
signed char var_10 = (signed char)-94;
signed char var_11 = (signed char)2;
short var_13 = (short)-21096;
int zero = 0;
long long int var_16 = -1192703932289327471LL;
signed char var_17 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
