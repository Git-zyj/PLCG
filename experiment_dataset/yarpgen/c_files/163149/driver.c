#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)153;
short var_7 = (short)-26742;
long long int var_16 = 4990154547991390330LL;
int zero = 0;
int var_19 = -2096081276;
int var_20 = 85964816;
short var_21 = (short)14157;
short var_22 = (short)32077;
long long int var_23 = 8287623817101022861LL;
int var_24 = 1606170219;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
