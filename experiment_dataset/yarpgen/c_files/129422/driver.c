#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18958;
unsigned int var_4 = 383406304U;
unsigned int var_9 = 282615466U;
unsigned char var_10 = (unsigned char)25;
int zero = 0;
short var_11 = (short)16532;
unsigned char var_12 = (unsigned char)221;
unsigned int var_13 = 1106172980U;
unsigned int var_14 = 2195989435U;
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
