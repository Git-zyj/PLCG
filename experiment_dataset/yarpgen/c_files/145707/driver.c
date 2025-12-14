#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)50;
unsigned char var_14 = (unsigned char)226;
unsigned char var_15 = (unsigned char)231;
unsigned char var_18 = (unsigned char)136;
int zero = 0;
unsigned char var_20 = (unsigned char)224;
unsigned char var_21 = (unsigned char)119;
long long int var_22 = 8900275163513199347LL;
unsigned char var_23 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
