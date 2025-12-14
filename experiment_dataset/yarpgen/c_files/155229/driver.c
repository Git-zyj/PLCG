#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-32683;
short var_8 = (short)-11648;
unsigned int var_10 = 441315912U;
short var_13 = (short)15430;
int zero = 0;
short var_19 = (short)-4403;
short var_20 = (short)-20569;
unsigned short var_21 = (unsigned short)15352;
unsigned char var_22 = (unsigned char)211;
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
