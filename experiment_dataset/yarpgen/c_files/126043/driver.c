#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
signed char var_3 = (signed char)99;
unsigned short var_4 = (unsigned short)14767;
unsigned char var_7 = (unsigned char)2;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 14180667118601315262ULL;
int zero = 0;
long long int var_10 = -8476467416092221451LL;
unsigned long long int var_11 = 6788799508648199091ULL;
short var_12 = (short)-9794;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
