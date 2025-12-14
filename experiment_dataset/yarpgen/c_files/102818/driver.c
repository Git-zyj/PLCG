#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
unsigned char var_1 = (unsigned char)157;
long long int var_2 = -2329675044417263420LL;
short var_4 = (short)28665;
unsigned char var_6 = (unsigned char)220;
long long int var_9 = 5141053415592716881LL;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
unsigned short var_14 = (unsigned short)44391;
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
