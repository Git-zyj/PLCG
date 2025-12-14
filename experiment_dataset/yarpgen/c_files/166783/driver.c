#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1536289683;
int var_4 = -1075860928;
int var_12 = 1434186063;
unsigned char var_13 = (unsigned char)240;
int zero = 0;
unsigned char var_17 = (unsigned char)139;
int var_18 = 998803103;
unsigned char var_19 = (unsigned char)162;
int var_20 = 1578909539;
int var_21 = 518564675;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
