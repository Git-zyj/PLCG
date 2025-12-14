#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4383957006196114840LL;
unsigned long long int var_2 = 8471285659034177003ULL;
int var_3 = -1505198023;
unsigned char var_6 = (unsigned char)161;
signed char var_7 = (signed char)-81;
unsigned short var_10 = (unsigned short)52867;
int zero = 0;
unsigned int var_11 = 1903199314U;
short var_12 = (short)29932;
unsigned int var_13 = 2517305084U;
short var_14 = (short)-1308;
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
