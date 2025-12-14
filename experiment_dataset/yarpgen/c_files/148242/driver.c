#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
short var_2 = (short)-23382;
int var_8 = 1419661039;
unsigned int var_11 = 3242962183U;
int zero = 0;
unsigned int var_17 = 1877870152U;
int var_18 = 1222907072;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
