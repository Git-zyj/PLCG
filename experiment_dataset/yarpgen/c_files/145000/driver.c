#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14236;
unsigned char var_9 = (unsigned char)77;
int zero = 0;
unsigned char var_13 = (unsigned char)62;
unsigned int var_14 = 3096841299U;
unsigned int var_15 = 3664080727U;
long long int var_16 = -741907975509704997LL;
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
