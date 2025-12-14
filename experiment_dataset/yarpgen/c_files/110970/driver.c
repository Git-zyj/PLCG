#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2741;
unsigned short var_2 = (unsigned short)58694;
unsigned short var_4 = (unsigned short)28928;
unsigned short var_5 = (unsigned short)63457;
long long int var_6 = 8502897838190980197LL;
int zero = 0;
unsigned short var_11 = (unsigned short)3320;
unsigned char var_12 = (unsigned char)67;
int var_13 = -940513644;
int var_14 = 1315365236;
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
