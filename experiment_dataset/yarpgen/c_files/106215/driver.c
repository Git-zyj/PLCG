#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 481850457556395277LL;
signed char var_1 = (signed char)-20;
long long int var_3 = -3735443661539999550LL;
unsigned int var_4 = 191122022U;
unsigned int var_7 = 321059342U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)124;
unsigned char var_10 = (unsigned char)191;
int zero = 0;
unsigned char var_11 = (unsigned char)161;
unsigned char var_12 = (unsigned char)255;
long long int var_13 = 3128640214346043477LL;
unsigned int var_14 = 3874502197U;
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
