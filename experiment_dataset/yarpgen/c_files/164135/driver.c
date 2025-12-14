#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1038080414U;
unsigned long long int var_5 = 6741287397630208801ULL;
long long int var_7 = -657219320096567368LL;
int zero = 0;
unsigned short var_10 = (unsigned short)47723;
unsigned char var_11 = (unsigned char)32;
unsigned short var_12 = (unsigned short)62279;
unsigned short var_13 = (unsigned short)31034;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
