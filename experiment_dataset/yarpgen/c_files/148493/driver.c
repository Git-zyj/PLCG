#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3918890323U;
unsigned short var_2 = (unsigned short)53338;
unsigned short var_4 = (unsigned short)41616;
int var_5 = -1957161333;
int var_7 = -772912113;
unsigned short var_8 = (unsigned short)51640;
unsigned int var_9 = 1016741225U;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -345700703;
unsigned long long int var_12 = 8319064387512356632ULL;
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
