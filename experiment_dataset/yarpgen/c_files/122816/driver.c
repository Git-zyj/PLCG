#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6002361589693174521LL;
unsigned int var_2 = 2024089523U;
short var_4 = (short)-5271;
unsigned int var_6 = 1684082180U;
short var_7 = (short)-983;
int zero = 0;
unsigned char var_11 = (unsigned char)149;
unsigned short var_12 = (unsigned short)41529;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
