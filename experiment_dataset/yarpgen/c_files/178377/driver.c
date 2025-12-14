#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 528786074544149287LL;
unsigned long long int var_4 = 2644732262775623497ULL;
unsigned short var_10 = (unsigned short)58662;
int zero = 0;
unsigned short var_11 = (unsigned short)11226;
short var_12 = (short)17335;
short var_13 = (short)-7768;
short var_14 = (short)23042;
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
