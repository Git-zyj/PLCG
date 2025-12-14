#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-18560;
unsigned int var_8 = 3201282808U;
short var_9 = (short)8821;
int var_13 = 612200743;
short var_14 = (short)4933;
int var_16 = -1792541000;
unsigned char var_17 = (unsigned char)68;
int zero = 0;
short var_19 = (short)14815;
short var_20 = (short)27030;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
