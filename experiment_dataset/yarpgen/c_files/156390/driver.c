#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2413796740158872107LL;
unsigned short var_4 = (unsigned short)11835;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 1882796862689058657ULL;
int zero = 0;
unsigned int var_10 = 3201066453U;
long long int var_11 = 6245262798772980410LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
