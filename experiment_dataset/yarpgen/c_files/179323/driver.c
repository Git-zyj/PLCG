#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1913645113;
int var_2 = -2137273316;
signed char var_10 = (signed char)-88;
unsigned int var_13 = 3392633646U;
int zero = 0;
unsigned char var_17 = (unsigned char)119;
signed char var_18 = (signed char)-22;
unsigned short var_19 = (unsigned short)265;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
