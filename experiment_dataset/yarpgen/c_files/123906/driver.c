#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4776181358928621491LL;
unsigned int var_2 = 2063919217U;
int var_5 = 906290980;
unsigned int var_7 = 741738551U;
unsigned int var_8 = 1197977151U;
short var_9 = (short)-17108;
unsigned short var_10 = (unsigned short)14691;
short var_12 = (short)-27045;
int zero = 0;
signed char var_15 = (signed char)-21;
int var_16 = -40323049;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
