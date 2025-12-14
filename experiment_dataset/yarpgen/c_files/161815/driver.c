#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 423286954;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)169;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)48525;
int zero = 0;
unsigned long long int var_12 = 12212785685936968028ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)17350;
unsigned char var_15 = (unsigned char)141;
void init() {
}

void checksum() {
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
