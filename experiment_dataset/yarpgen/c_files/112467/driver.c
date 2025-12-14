#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1513414083;
int var_5 = 755308438;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1165523895;
_Bool var_14 = (_Bool)0;
int var_15 = -1416037002;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
