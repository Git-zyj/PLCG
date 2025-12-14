#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)27383;
unsigned short var_9 = (unsigned short)5900;
unsigned int var_12 = 393915263U;
unsigned int var_15 = 131310033U;
int zero = 0;
unsigned int var_18 = 3106785869U;
unsigned short var_19 = (unsigned short)21472;
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
