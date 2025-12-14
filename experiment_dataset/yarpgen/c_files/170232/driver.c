#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3318084824U;
int var_4 = -381831307;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)49874;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
unsigned long long int var_14 = 17309895120875554053ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
