#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-20;
short var_3 = (short)-4387;
short var_5 = (short)-27923;
short var_8 = (short)10439;
signed char var_9 = (signed char)-25;
unsigned int var_10 = 2918467528U;
int zero = 0;
short var_11 = (short)6119;
short var_12 = (short)-22250;
unsigned short var_13 = (unsigned short)59116;
void init() {
}

void checksum() {
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
