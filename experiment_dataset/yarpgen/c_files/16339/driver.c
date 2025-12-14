#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)163;
unsigned char var_6 = (unsigned char)2;
long long int var_7 = -4526494484480328114LL;
unsigned char var_8 = (unsigned char)130;
int zero = 0;
long long int var_13 = 7119795825652277424LL;
unsigned char var_14 = (unsigned char)203;
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
