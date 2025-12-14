#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49732;
unsigned short var_2 = (unsigned short)64141;
long long int var_4 = -2038559953389413873LL;
unsigned char var_6 = (unsigned char)17;
unsigned short var_8 = (unsigned short)20717;
short var_9 = (short)-24818;
int zero = 0;
long long int var_12 = -9151278328500967957LL;
int var_13 = 1335287986;
unsigned short var_14 = (unsigned short)61463;
void init() {
}

void checksum() {
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
