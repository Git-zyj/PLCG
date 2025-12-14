#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
short var_2 = (short)1188;
long long int var_4 = -5957387586135606826LL;
long long int var_5 = -6943539290535955022LL;
unsigned char var_6 = (unsigned char)32;
signed char var_7 = (signed char)-17;
unsigned short var_11 = (unsigned short)57133;
short var_12 = (short)-11174;
unsigned char var_13 = (unsigned char)116;
unsigned long long int var_15 = 1014992913934108712ULL;
int zero = 0;
signed char var_16 = (signed char)-68;
unsigned long long int var_17 = 2776592997640884225ULL;
unsigned long long int var_18 = 16222594473044381347ULL;
unsigned char var_19 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
