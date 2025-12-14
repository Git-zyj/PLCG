#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1471811737;
unsigned short var_2 = (unsigned short)57252;
short var_5 = (short)-5588;
unsigned char var_6 = (unsigned char)197;
unsigned long long int var_8 = 10104299722433758834ULL;
signed char var_11 = (signed char)-28;
int zero = 0;
unsigned long long int var_13 = 6256478878598258026ULL;
unsigned long long int var_14 = 17752475181179108626ULL;
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
