#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
unsigned char var_3 = (unsigned char)126;
short var_5 = (short)5166;
int var_9 = 1655301088;
unsigned int var_10 = 1685256397U;
int zero = 0;
short var_12 = (short)19668;
unsigned long long int var_13 = 6305101732524251160ULL;
unsigned short var_14 = (unsigned short)30228;
short var_15 = (short)26790;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
