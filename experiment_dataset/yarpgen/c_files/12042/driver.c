#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1880683478;
int var_5 = 952613684;
unsigned long long int var_9 = 15178797646301865907ULL;
unsigned short var_13 = (unsigned short)23882;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
unsigned long long int var_16 = 3880055296159307628ULL;
unsigned char var_17 = (unsigned char)133;
int var_18 = 1562854756;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
