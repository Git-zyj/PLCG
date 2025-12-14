#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1051;
short var_2 = (short)-15037;
int var_3 = -319819087;
long long int var_4 = -7088340567348435199LL;
unsigned short var_6 = (unsigned short)39854;
int var_8 = -2086434209;
int zero = 0;
signed char var_12 = (signed char)25;
int var_13 = -5928690;
unsigned short var_14 = (unsigned short)60920;
short var_15 = (short)-27994;
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
