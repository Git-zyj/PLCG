#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5164;
short var_3 = (short)-32498;
unsigned long long int var_5 = 17247788900847895587ULL;
unsigned char var_11 = (unsigned char)5;
long long int var_13 = -162386030555213267LL;
int zero = 0;
unsigned long long int var_15 = 16214871191808982832ULL;
short var_16 = (short)2730;
_Bool var_17 = (_Bool)0;
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
