#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30614;
unsigned char var_7 = (unsigned char)50;
short var_9 = (short)-9845;
int zero = 0;
int var_11 = -987263796;
unsigned long long int var_12 = 17693496872514154835ULL;
unsigned char var_13 = (unsigned char)111;
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
