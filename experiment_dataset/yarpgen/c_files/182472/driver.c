#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1154912838;
short var_7 = (short)-1190;
int var_10 = 338433853;
unsigned long long int var_12 = 10267347523240678281ULL;
unsigned long long int var_18 = 1037909041506996173ULL;
unsigned long long int var_19 = 379015178795343263ULL;
int zero = 0;
long long int var_20 = -197370039649904164LL;
int var_21 = 1242292268;
unsigned int var_22 = 3793004379U;
unsigned char var_23 = (unsigned char)43;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
