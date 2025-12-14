#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3603369467U;
unsigned int var_3 = 594931529U;
signed char var_9 = (signed char)47;
unsigned char var_11 = (unsigned char)177;
int zero = 0;
long long int var_13 = -2746724478196977093LL;
signed char var_14 = (signed char)-38;
unsigned char var_15 = (unsigned char)230;
unsigned short var_16 = (unsigned short)17311;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
