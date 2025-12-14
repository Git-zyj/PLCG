#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2896338758U;
long long int var_3 = -3985510391930323987LL;
unsigned short var_5 = (unsigned short)13669;
unsigned int var_7 = 6564937U;
int var_10 = -1235326264;
int var_13 = 957285419;
int zero = 0;
int var_18 = 1662368720;
unsigned char var_19 = (unsigned char)64;
unsigned int var_20 = 3800183742U;
void init() {
}

void checksum() {
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
