#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9636;
unsigned long long int var_2 = 14092911061822166264ULL;
unsigned short var_3 = (unsigned short)17766;
unsigned long long int var_4 = 4843181855002337363ULL;
short var_5 = (short)27949;
unsigned char var_6 = (unsigned char)148;
signed char var_7 = (signed char)43;
unsigned int var_9 = 3887373807U;
int var_10 = 184173711;
int zero = 0;
unsigned long long int var_11 = 12585327068840186113ULL;
short var_12 = (short)-2726;
unsigned int var_13 = 1060231152U;
unsigned short var_14 = (unsigned short)53119;
unsigned int var_15 = 1736788665U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
