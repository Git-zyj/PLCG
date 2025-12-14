#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3495625814664598127ULL;
short var_11 = (short)15816;
unsigned char var_13 = (unsigned char)207;
int zero = 0;
signed char var_14 = (signed char)-71;
unsigned long long int var_15 = 15106966553881689604ULL;
long long int var_16 = 4116480324976638503LL;
short var_17 = (short)13145;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
