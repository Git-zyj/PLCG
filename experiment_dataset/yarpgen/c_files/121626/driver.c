#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26091;
int var_2 = 2054608341;
unsigned int var_4 = 3458413555U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)42950;
short var_7 = (short)25349;
long long int var_11 = 6477616594788680449LL;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
short var_13 = (short)-7474;
void init() {
}

void checksum() {
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
