#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
long long int var_2 = -1300481020974566738LL;
long long int var_4 = -3396848920370800604LL;
unsigned char var_5 = (unsigned char)173;
signed char var_7 = (signed char)104;
signed char var_9 = (signed char)58;
int zero = 0;
signed char var_13 = (signed char)-7;
unsigned char var_14 = (unsigned char)40;
unsigned long long int var_15 = 1472567753073736758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
