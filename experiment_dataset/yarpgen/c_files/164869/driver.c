#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)22111;
unsigned short var_15 = (unsigned short)3345;
unsigned short var_17 = (unsigned short)45254;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -153100781;
unsigned short var_21 = (unsigned short)45291;
long long int var_22 = 229981316724465511LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
