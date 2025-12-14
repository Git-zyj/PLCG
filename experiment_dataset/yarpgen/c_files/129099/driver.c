#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)119;
int var_7 = -507205400;
unsigned int var_9 = 1293944980U;
int var_15 = -1354881835;
int zero = 0;
unsigned short var_17 = (unsigned short)16295;
unsigned char var_18 = (unsigned char)97;
unsigned int var_19 = 3551863628U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
