#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60035;
int var_1 = -343839681;
long long int var_2 = 5098921898463861469LL;
signed char var_6 = (signed char)76;
short var_8 = (short)-1435;
short var_10 = (short)-17345;
int zero = 0;
unsigned char var_13 = (unsigned char)176;
unsigned long long int var_14 = 1880371455302668768ULL;
unsigned long long int var_15 = 2454039716952520869ULL;
unsigned int var_16 = 313074696U;
int var_17 = 2082762313;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
