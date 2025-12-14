#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18365694218772815506ULL;
unsigned short var_4 = (unsigned short)13086;
unsigned long long int var_8 = 2706353671300371878ULL;
int zero = 0;
unsigned long long int var_15 = 17635626596284736507ULL;
short var_16 = (short)5321;
unsigned long long int var_17 = 6327626457950892382ULL;
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
