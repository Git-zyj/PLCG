#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
signed char var_3 = (signed char)-104;
unsigned int var_5 = 31479520U;
unsigned int var_9 = 3251742314U;
long long int var_12 = 7067573002500523832LL;
int zero = 0;
unsigned short var_15 = (unsigned short)45551;
unsigned short var_16 = (unsigned short)7272;
short var_17 = (short)-9383;
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
