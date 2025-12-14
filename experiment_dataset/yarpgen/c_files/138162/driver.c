#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 764207145U;
unsigned int var_2 = 748579606U;
unsigned short var_3 = (unsigned short)55193;
short var_4 = (short)15029;
short var_6 = (short)-17031;
int var_7 = 1361591327;
int zero = 0;
signed char var_12 = (signed char)108;
unsigned int var_13 = 1247816036U;
unsigned char var_14 = (unsigned char)251;
unsigned short var_15 = (unsigned short)16204;
long long int var_16 = -7157692334118265724LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
