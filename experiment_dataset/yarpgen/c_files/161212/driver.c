#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62842;
int var_1 = 2112594916;
short var_2 = (short)-32607;
signed char var_3 = (signed char)38;
signed char var_4 = (signed char)-50;
long long int var_5 = -8938210923976869299LL;
unsigned char var_8 = (unsigned char)142;
int var_9 = 1825764983;
int zero = 0;
long long int var_10 = 599838270871148563LL;
unsigned int var_11 = 4051942149U;
int var_12 = 1396373164;
short var_13 = (short)31724;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
