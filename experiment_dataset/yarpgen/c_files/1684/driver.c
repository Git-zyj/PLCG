#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17578305917271635705ULL;
short var_1 = (short)-23068;
unsigned short var_3 = (unsigned short)35669;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)47106;
unsigned long long int var_7 = 6790169979243966046ULL;
int var_9 = 404412751;
int zero = 0;
unsigned char var_10 = (unsigned char)110;
int var_11 = 769982537;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
