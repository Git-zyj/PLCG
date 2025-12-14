#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
int var_1 = 715277987;
unsigned long long int var_2 = 14422255352823320664ULL;
signed char var_3 = (signed char)50;
unsigned long long int var_4 = 11793232280285290389ULL;
int var_5 = 1837442663;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)20499;
unsigned long long int var_9 = 2950723752756728023ULL;
short var_10 = (short)-26961;
int zero = 0;
unsigned short var_11 = (unsigned short)18976;
long long int var_12 = -6791010235162843916LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4005943159U;
void init() {
}

void checksum() {
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
