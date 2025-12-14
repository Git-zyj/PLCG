#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)11100;
short var_12 = (short)5601;
unsigned char var_14 = (unsigned char)170;
int zero = 0;
unsigned long long int var_16 = 8971350142477768729ULL;
unsigned int var_17 = 2663104358U;
unsigned char var_18 = (unsigned char)194;
unsigned char var_19 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
