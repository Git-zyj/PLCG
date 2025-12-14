#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5276;
int var_3 = -1214408324;
unsigned int var_4 = 1288074370U;
short var_5 = (short)-28842;
signed char var_6 = (signed char)-101;
short var_8 = (short)3724;
int var_9 = -2137769257;
int zero = 0;
int var_13 = 865490665;
short var_14 = (short)-8633;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
