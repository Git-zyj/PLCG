#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 923276426;
int var_5 = 1381386446;
int var_9 = -817558383;
int var_10 = 1157545794;
int var_13 = -1390340201;
int zero = 0;
int var_17 = -1637770162;
int var_18 = 1915924203;
int var_19 = -496396066;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
