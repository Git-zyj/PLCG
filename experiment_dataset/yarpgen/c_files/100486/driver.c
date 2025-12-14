#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)10169;
long long int var_8 = -7982523772129059592LL;
unsigned char var_10 = (unsigned char)227;
unsigned long long int var_11 = 2864831478734675510ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)123;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
