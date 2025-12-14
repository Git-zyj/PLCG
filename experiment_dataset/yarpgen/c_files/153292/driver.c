#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1092202104;
long long int var_6 = 1869043028253449704LL;
unsigned char var_9 = (unsigned char)51;
unsigned char var_11 = (unsigned char)42;
int var_13 = -1414999724;
int zero = 0;
unsigned char var_15 = (unsigned char)181;
unsigned short var_16 = (unsigned short)61303;
unsigned long long int var_17 = 9105845203419648735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
