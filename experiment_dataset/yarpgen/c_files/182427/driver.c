#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 412212647;
int var_3 = 629076063;
short var_6 = (short)-14220;
unsigned char var_8 = (unsigned char)115;
unsigned short var_9 = (unsigned short)46363;
int zero = 0;
unsigned long long int var_10 = 3482615220580730288ULL;
unsigned int var_11 = 2236892656U;
unsigned int var_12 = 3066941064U;
unsigned short var_13 = (unsigned short)29472;
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
