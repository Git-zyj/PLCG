#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1277771566U;
unsigned char var_8 = (unsigned char)111;
unsigned int var_9 = 535354886U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)81;
int zero = 0;
long long int var_16 = 8084365519028807676LL;
unsigned long long int var_17 = 10631895956098017639ULL;
short var_18 = (short)-251;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
