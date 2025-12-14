#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15946;
short var_3 = (short)-26923;
unsigned long long int var_5 = 1211666134104534882ULL;
unsigned int var_9 = 2786129396U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2585864832131164657ULL;
void init() {
}

void checksum() {
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
