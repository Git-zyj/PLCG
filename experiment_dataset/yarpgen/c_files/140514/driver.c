#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9566375809643233848ULL;
unsigned int var_7 = 4098796889U;
unsigned int var_11 = 4226750907U;
int var_15 = 26086761;
int zero = 0;
unsigned long long int var_17 = 15306438597918736506ULL;
unsigned char var_18 = (unsigned char)111;
short var_19 = (short)17702;
void init() {
}

void checksum() {
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
