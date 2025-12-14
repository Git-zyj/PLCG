#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
unsigned short var_4 = (unsigned short)21682;
unsigned long long int var_6 = 911199821505284697ULL;
unsigned long long int var_9 = 17507741897827686033ULL;
unsigned long long int var_10 = 8641569963208054338ULL;
unsigned short var_11 = (unsigned short)31801;
int zero = 0;
unsigned int var_12 = 3082019050U;
unsigned short var_13 = (unsigned short)55193;
unsigned char var_14 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
