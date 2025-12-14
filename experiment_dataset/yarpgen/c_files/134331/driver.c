#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -620248916316190226LL;
int var_8 = -1278676322;
unsigned long long int var_9 = 8739203073115497925ULL;
int zero = 0;
signed char var_11 = (signed char)12;
int var_12 = 363316913;
int var_13 = -254915627;
void init() {
}

void checksum() {
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
