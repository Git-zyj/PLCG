#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned char var_3 = (unsigned char)4;
signed char var_4 = (signed char)61;
unsigned long long int var_8 = 16518074367984975137ULL;
int var_11 = -1986992733;
int var_13 = -713045115;
int zero = 0;
int var_14 = 901421348;
long long int var_15 = -8192579485283589828LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
