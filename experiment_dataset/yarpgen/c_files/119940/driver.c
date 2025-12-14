#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31781;
unsigned char var_1 = (unsigned char)94;
_Bool var_2 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)151;
unsigned char var_11 = (unsigned char)211;
unsigned short var_12 = (unsigned short)23775;
int var_13 = 1179940254;
int var_14 = 879730693;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
