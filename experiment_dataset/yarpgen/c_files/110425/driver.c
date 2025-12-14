#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9894;
unsigned char var_3 = (unsigned char)183;
short var_4 = (short)-30444;
unsigned char var_15 = (unsigned char)165;
int zero = 0;
unsigned short var_16 = (unsigned short)800;
short var_17 = (short)-28963;
unsigned long long int var_18 = 9683279894679021545ULL;
int var_19 = 794521837;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
