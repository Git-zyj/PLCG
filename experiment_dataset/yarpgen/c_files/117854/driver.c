#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9037304974748102409LL;
int var_3 = -1707283705;
unsigned long long int var_7 = 5630566287369127512ULL;
unsigned long long int var_8 = 15019046846538464796ULL;
unsigned long long int var_9 = 5552145433299833036ULL;
int var_10 = 1524531351;
int zero = 0;
unsigned long long int var_11 = 3034382137340247150ULL;
long long int var_12 = 3935028109729823439LL;
int var_13 = -647473086;
long long int var_14 = 2819053208172915466LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
