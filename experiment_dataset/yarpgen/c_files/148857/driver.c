#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
short var_1 = (short)24715;
int var_2 = 1568685391;
_Bool var_7 = (_Bool)1;
long long int var_9 = 4665405198945232939LL;
int var_11 = -655529583;
int zero = 0;
unsigned short var_12 = (unsigned short)41140;
unsigned char var_13 = (unsigned char)99;
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
