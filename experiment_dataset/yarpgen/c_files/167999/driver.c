#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 674129579;
unsigned char var_8 = (unsigned char)75;
unsigned char var_9 = (unsigned char)141;
int var_13 = 575720528;
unsigned char var_14 = (unsigned char)161;
int zero = 0;
long long int var_20 = 1748455298037234676LL;
unsigned int var_21 = 4115523473U;
unsigned short var_22 = (unsigned short)54963;
int var_23 = -776672198;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
