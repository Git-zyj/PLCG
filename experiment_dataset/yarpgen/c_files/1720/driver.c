#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53361;
unsigned long long int var_3 = 4440991020049984076ULL;
unsigned short var_4 = (unsigned short)9616;
unsigned short var_8 = (unsigned short)23846;
int zero = 0;
unsigned short var_10 = (unsigned short)4608;
unsigned short var_11 = (unsigned short)41513;
short var_12 = (short)-1320;
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
