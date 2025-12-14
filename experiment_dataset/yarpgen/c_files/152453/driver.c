#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8713653641945537582ULL;
long long int var_1 = -1263841867527438856LL;
int var_3 = 1492263675;
unsigned char var_5 = (unsigned char)157;
unsigned short var_6 = (unsigned short)20088;
unsigned long long int var_7 = 11702444641064297550ULL;
unsigned char var_9 = (unsigned char)46;
int zero = 0;
short var_11 = (short)26518;
unsigned char var_12 = (unsigned char)31;
signed char var_13 = (signed char)-72;
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
