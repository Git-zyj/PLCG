#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)21961;
unsigned char var_6 = (unsigned char)68;
long long int var_11 = -5653908318933573827LL;
unsigned char var_13 = (unsigned char)121;
int zero = 0;
unsigned long long int var_19 = 14116287301455707354ULL;
int var_20 = -330744424;
void init() {
}

void checksum() {
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
