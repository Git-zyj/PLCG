#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)22;
unsigned int var_4 = 1024940855U;
signed char var_9 = (signed char)-112;
unsigned int var_10 = 3253230427U;
signed char var_11 = (signed char)-10;
int zero = 0;
short var_13 = (short)17958;
unsigned int var_14 = 2458332851U;
void init() {
}

void checksum() {
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
