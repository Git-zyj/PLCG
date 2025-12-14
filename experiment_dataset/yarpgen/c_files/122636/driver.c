#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46912;
unsigned short var_2 = (unsigned short)57260;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-127;
unsigned char var_14 = (unsigned char)34;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8175659284301161017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
