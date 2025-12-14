#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1239367071733095953ULL;
unsigned char var_5 = (unsigned char)188;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 2526495160292343050ULL;
int zero = 0;
long long int var_16 = 3444298091874348803LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11951101217610444686ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
