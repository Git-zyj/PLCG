#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1497867836366521633LL;
_Bool var_6 = (_Bool)1;
int var_7 = -1011396637;
unsigned short var_11 = (unsigned short)64722;
int zero = 0;
long long int var_12 = 489775652852388826LL;
unsigned int var_13 = 2932672418U;
long long int var_14 = -8933218320877585393LL;
unsigned char var_15 = (unsigned char)168;
short var_16 = (short)168;
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
