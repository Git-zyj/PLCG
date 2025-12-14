#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4481088126437503273ULL;
unsigned long long int var_2 = 9783139482063410221ULL;
unsigned char var_3 = (unsigned char)88;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 12001292311243643855ULL;
unsigned char var_14 = (unsigned char)98;
int zero = 0;
short var_15 = (short)-27407;
_Bool var_16 = (_Bool)1;
int var_17 = -38323766;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
