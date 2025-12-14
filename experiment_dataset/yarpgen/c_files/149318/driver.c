#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 372897308;
int var_4 = 515840215;
int var_10 = -1202563726;
unsigned short var_11 = (unsigned short)50851;
unsigned char var_12 = (unsigned char)62;
unsigned short var_13 = (unsigned short)34810;
int zero = 0;
int var_14 = 21347700;
unsigned char var_15 = (unsigned char)66;
unsigned char var_16 = (unsigned char)73;
void init() {
}

void checksum() {
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
