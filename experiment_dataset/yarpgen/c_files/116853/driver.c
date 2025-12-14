#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1596450188953328262LL;
unsigned int var_2 = 3811992969U;
_Bool var_3 = (_Bool)1;
long long int var_4 = -7679628241534533240LL;
unsigned char var_6 = (unsigned char)227;
unsigned int var_7 = 2056867624U;
unsigned char var_8 = (unsigned char)99;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-39;
unsigned short var_13 = (unsigned short)18794;
void init() {
}

void checksum() {
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
