#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15917552411909208590ULL;
signed char var_3 = (signed char)82;
signed char var_9 = (signed char)120;
int var_11 = 1189928102;
unsigned short var_13 = (unsigned short)35062;
int zero = 0;
unsigned long long int var_16 = 16265319796899293419ULL;
short var_17 = (short)-25117;
void init() {
}

void checksum() {
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
