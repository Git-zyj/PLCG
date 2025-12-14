#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23247;
short var_3 = (short)15903;
unsigned long long int var_7 = 9904218525031470550ULL;
int var_8 = -1511183131;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
int var_11 = 879390643;
signed char var_12 = (signed char)83;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
