#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1925088749U;
long long int var_3 = -5053831670378070116LL;
unsigned short var_8 = (unsigned short)25742;
unsigned short var_12 = (unsigned short)889;
short var_13 = (short)25501;
int var_14 = 1561044238;
unsigned char var_15 = (unsigned char)17;
int zero = 0;
int var_19 = -382948247;
unsigned short var_20 = (unsigned short)346;
unsigned short var_21 = (unsigned short)41566;
signed char var_22 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
