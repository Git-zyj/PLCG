#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8765967325384663322LL;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)3;
unsigned char var_5 = (unsigned char)186;
long long int var_8 = 780540693014925020LL;
unsigned long long int var_9 = 14379996741566825005ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)100;
unsigned long long int var_12 = 364170395365762670ULL;
long long int var_13 = 3750733109288134201LL;
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
