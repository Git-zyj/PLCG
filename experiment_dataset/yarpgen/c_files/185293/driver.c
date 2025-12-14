#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
int var_3 = 1219340750;
unsigned long long int var_5 = 4514795603611250316ULL;
unsigned short var_6 = (unsigned short)20338;
unsigned int var_9 = 2898225951U;
long long int var_10 = -4045017404712695112LL;
int zero = 0;
int var_11 = 1194943953;
unsigned char var_12 = (unsigned char)111;
unsigned short var_13 = (unsigned short)63602;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
