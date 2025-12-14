#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7053181821059514595LL;
long long int var_7 = 4429130575366507903LL;
unsigned short var_8 = (unsigned short)23915;
unsigned short var_10 = (unsigned short)23249;
unsigned int var_16 = 2560700003U;
int zero = 0;
unsigned short var_18 = (unsigned short)63140;
long long int var_19 = 5654961105854202448LL;
void init() {
}

void checksum() {
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
