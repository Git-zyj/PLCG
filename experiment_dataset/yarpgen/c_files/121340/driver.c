#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -205412346;
unsigned short var_6 = (unsigned short)5748;
signed char var_7 = (signed char)-109;
unsigned char var_8 = (unsigned char)204;
unsigned char var_10 = (unsigned char)131;
signed char var_14 = (signed char)-35;
int zero = 0;
unsigned int var_17 = 1183324559U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
