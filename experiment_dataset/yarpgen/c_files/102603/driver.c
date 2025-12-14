#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14441097244027027383ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)43529;
unsigned short var_9 = (unsigned short)41781;
int zero = 0;
int var_11 = -942885382;
unsigned short var_12 = (unsigned short)62389;
unsigned short var_13 = (unsigned short)32612;
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
