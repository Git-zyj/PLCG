#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
signed char var_3 = (signed char)-100;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)252;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)56684;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)118;
unsigned char var_13 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
