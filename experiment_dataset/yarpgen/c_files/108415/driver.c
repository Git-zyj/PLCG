#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3652401720U;
signed char var_3 = (signed char)64;
unsigned short var_6 = (unsigned short)17260;
unsigned short var_9 = (unsigned short)17061;
int zero = 0;
short var_10 = (short)11906;
unsigned long long int var_11 = 12153427954000196691ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
