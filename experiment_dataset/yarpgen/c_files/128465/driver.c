#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5495626298518543554LL;
long long int var_4 = -8370968064765998469LL;
unsigned char var_5 = (unsigned char)22;
unsigned long long int var_6 = 11749274287890719946ULL;
unsigned int var_9 = 240977127U;
unsigned char var_10 = (unsigned char)8;
int zero = 0;
unsigned int var_11 = 3992529890U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6170022259463599289LL;
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
