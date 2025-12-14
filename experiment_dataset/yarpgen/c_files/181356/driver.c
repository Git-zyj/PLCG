#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57013;
short var_1 = (short)-18880;
unsigned short var_2 = (unsigned short)47301;
unsigned char var_5 = (unsigned char)48;
int var_6 = -644483281;
int var_8 = -1238282651;
int zero = 0;
signed char var_10 = (signed char)-8;
unsigned long long int var_11 = 9490435997120061365ULL;
short var_12 = (short)29915;
unsigned int var_13 = 2160364043U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
