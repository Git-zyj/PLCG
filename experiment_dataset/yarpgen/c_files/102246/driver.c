#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58291;
unsigned short var_1 = (unsigned short)23784;
short var_2 = (short)19154;
signed char var_4 = (signed char)-98;
int var_7 = 1627870283;
int zero = 0;
signed char var_10 = (signed char)-30;
short var_11 = (short)-988;
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
