#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20961;
short var_2 = (short)24887;
short var_7 = (short)7061;
unsigned char var_9 = (unsigned char)89;
long long int var_12 = -7450130403994621362LL;
int var_13 = 2017002401;
int zero = 0;
unsigned char var_14 = (unsigned char)112;
unsigned char var_15 = (unsigned char)85;
short var_16 = (short)-1363;
void init() {
}

void checksum() {
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
