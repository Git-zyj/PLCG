#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1400319733;
int var_2 = -142433130;
long long int var_3 = 6029995293944957666LL;
int var_6 = -1099174142;
unsigned char var_7 = (unsigned char)166;
long long int var_10 = 4713414590069680698LL;
signed char var_12 = (signed char)100;
short var_14 = (short)-24946;
int zero = 0;
signed char var_17 = (signed char)-9;
short var_18 = (short)4573;
long long int var_19 = -2494341357484421206LL;
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
