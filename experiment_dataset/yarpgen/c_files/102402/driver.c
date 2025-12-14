#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10781;
short var_2 = (short)-8858;
unsigned int var_4 = 3525480478U;
signed char var_6 = (signed char)108;
short var_9 = (short)20464;
unsigned long long int var_14 = 15947211628805057554ULL;
unsigned long long int var_16 = 4864488550621739593ULL;
int zero = 0;
signed char var_17 = (signed char)-10;
unsigned long long int var_18 = 12528255351270760533ULL;
unsigned char var_19 = (unsigned char)183;
long long int var_20 = -8556536825540311396LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
