#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned char var_2 = (unsigned char)205;
long long int var_16 = 3872858228675524268LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 8894536333800749974ULL;
int var_19 = -1581961928;
void init() {
}

void checksum() {
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
