#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2122935658U;
long long int var_3 = 469232962618014460LL;
short var_9 = (short)19674;
int zero = 0;
unsigned int var_10 = 1857263856U;
unsigned short var_11 = (unsigned short)27674;
unsigned char var_12 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
