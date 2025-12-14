#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58034;
unsigned char var_1 = (unsigned char)185;
_Bool var_6 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 4845291978319540820ULL;
unsigned long long int var_21 = 8431725871350819675ULL;
int var_22 = 692412214;
unsigned short var_23 = (unsigned short)18369;
unsigned short var_24 = (unsigned short)25258;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
