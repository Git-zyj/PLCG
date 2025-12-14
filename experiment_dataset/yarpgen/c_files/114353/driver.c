#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1638335412274849927ULL;
int var_2 = -1257496853;
short var_6 = (short)-19424;
int var_7 = 1375006850;
unsigned short var_8 = (unsigned short)17417;
unsigned long long int var_9 = 9882327289458744681ULL;
unsigned long long int var_11 = 1702502451991760505ULL;
int zero = 0;
int var_12 = -696313303;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)21843;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
