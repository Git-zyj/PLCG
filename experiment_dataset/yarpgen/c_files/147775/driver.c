#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28290;
signed char var_3 = (signed char)50;
long long int var_4 = 6558398473078853245LL;
unsigned int var_6 = 2543078917U;
unsigned int var_7 = 3289096414U;
int var_8 = 1282297663;
unsigned short var_9 = (unsigned short)45774;
long long int var_10 = -290695965208377598LL;
int zero = 0;
long long int var_11 = -8082402189334127576LL;
unsigned short var_12 = (unsigned short)32795;
unsigned long long int var_13 = 11040856966589701671ULL;
short var_14 = (short)7570;
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
