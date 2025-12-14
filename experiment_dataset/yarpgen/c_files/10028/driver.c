#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1366518039666715064LL;
long long int var_1 = 6962556659185164866LL;
signed char var_7 = (signed char)-3;
_Bool var_11 = (_Bool)1;
long long int var_13 = 7273760162040742012LL;
unsigned char var_14 = (unsigned char)76;
int zero = 0;
short var_15 = (short)29997;
unsigned short var_16 = (unsigned short)36002;
unsigned int var_17 = 2036393500U;
void init() {
}

void checksum() {
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
