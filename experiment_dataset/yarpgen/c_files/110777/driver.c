#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)253;
unsigned long long int var_9 = 16056712631373122473ULL;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
unsigned short var_17 = (unsigned short)19935;
unsigned long long int var_18 = 833140723934845339ULL;
long long int var_19 = -273017435854022657LL;
long long int var_20 = 1836211237659966485LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
