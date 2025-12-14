#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 281882383544891156ULL;
int var_4 = -1453424621;
unsigned int var_19 = 718847783U;
int zero = 0;
short var_20 = (short)14562;
unsigned short var_21 = (unsigned short)18023;
int var_22 = 522434427;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
