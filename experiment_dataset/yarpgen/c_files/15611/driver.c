#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12668;
int var_7 = -1265474810;
unsigned short var_8 = (unsigned short)20303;
signed char var_12 = (signed char)-101;
int zero = 0;
int var_14 = 417444208;
int var_15 = -1311421776;
void init() {
}

void checksum() {
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
