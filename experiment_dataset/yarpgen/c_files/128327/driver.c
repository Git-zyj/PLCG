#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 106318627324277048LL;
short var_4 = (short)-30219;
unsigned int var_5 = 4214375384U;
unsigned int var_6 = 1540543978U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)47863;
short var_11 = (short)-18961;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
