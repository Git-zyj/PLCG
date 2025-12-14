#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned int var_1 = 641645537U;
int var_2 = -1317526427;
int var_3 = -1984080334;
unsigned short var_5 = (unsigned short)10170;
unsigned short var_6 = (unsigned short)47439;
int var_7 = -2097863799;
signed char var_8 = (signed char)99;
int zero = 0;
unsigned long long int var_10 = 10861644162099896496ULL;
int var_11 = 1907159609;
signed char var_12 = (signed char)97;
unsigned int var_13 = 685516514U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
