#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1730645228;
unsigned long long int var_7 = 15663413062398453092ULL;
short var_9 = (short)32284;
unsigned char var_14 = (unsigned char)157;
signed char var_17 = (signed char)-35;
long long int var_18 = -2534252584369890885LL;
int zero = 0;
unsigned char var_20 = (unsigned char)137;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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
