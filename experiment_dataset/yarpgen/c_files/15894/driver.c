#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16707539062189070005ULL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-109;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
unsigned short var_12 = (unsigned short)10846;
unsigned short var_13 = (unsigned short)19677;
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
