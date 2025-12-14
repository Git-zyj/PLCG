#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4564;
unsigned short var_2 = (unsigned short)26286;
unsigned short var_6 = (unsigned short)12340;
int zero = 0;
int var_11 = 792387688;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)58565;
signed char var_14 = (signed char)70;
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
