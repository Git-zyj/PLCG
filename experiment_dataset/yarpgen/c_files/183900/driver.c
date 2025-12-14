#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48415;
_Bool var_5 = (_Bool)1;
int var_8 = -493075779;
unsigned char var_12 = (unsigned char)162;
unsigned int var_13 = 513260921U;
unsigned long long int var_14 = 18239704163734831417ULL;
int zero = 0;
unsigned long long int var_18 = 11508373100431067810ULL;
unsigned char var_19 = (unsigned char)144;
unsigned int var_20 = 3770389411U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
