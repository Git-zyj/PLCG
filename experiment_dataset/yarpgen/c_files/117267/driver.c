#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6893670212776183482LL;
int var_2 = -1794116753;
unsigned long long int var_3 = 8667923535638234558ULL;
long long int var_4 = -5180764401339410816LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)26987;
int var_8 = -348922253;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)32323;
unsigned long long int var_14 = 13304558774432556848ULL;
void init() {
}

void checksum() {
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
