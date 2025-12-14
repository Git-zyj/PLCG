#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5696773185001820733ULL;
unsigned long long int var_12 = 18143828467966596315ULL;
int var_15 = -1612804514;
short var_16 = (short)-16312;
int zero = 0;
unsigned long long int var_19 = 521867512981875097ULL;
unsigned short var_20 = (unsigned short)36075;
int var_21 = -1732928796;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
