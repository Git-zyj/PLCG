#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3227;
short var_2 = (short)8049;
short var_3 = (short)24474;
int var_4 = -109854855;
long long int var_5 = 2247900836214624949LL;
short var_8 = (short)-7749;
unsigned char var_9 = (unsigned char)86;
long long int var_11 = 2838029831909288582LL;
unsigned char var_16 = (unsigned char)66;
int zero = 0;
short var_19 = (short)-6453;
int var_20 = 1059594602;
unsigned char var_21 = (unsigned char)250;
unsigned char var_22 = (unsigned char)108;
signed char var_23 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
