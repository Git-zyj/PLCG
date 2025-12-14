#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)54;
int var_5 = 659349840;
unsigned char var_6 = (unsigned char)109;
unsigned short var_7 = (unsigned short)46001;
unsigned short var_9 = (unsigned short)21076;
int zero = 0;
unsigned long long int var_10 = 16570329675690294029ULL;
int var_11 = 648029539;
unsigned char var_12 = (unsigned char)193;
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
