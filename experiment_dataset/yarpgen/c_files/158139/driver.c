#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2905783076105550760LL;
unsigned long long int var_1 = 1619667026040652107ULL;
signed char var_5 = (signed char)58;
int var_6 = -1747182797;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8094083791003167176LL;
long long int var_11 = 6636238590327245277LL;
unsigned char var_14 = (unsigned char)14;
unsigned char var_17 = (unsigned char)53;
int zero = 0;
long long int var_19 = -8689732992120051174LL;
short var_20 = (short)-12235;
short var_21 = (short)-15025;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
