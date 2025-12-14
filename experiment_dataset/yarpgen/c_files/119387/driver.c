#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16889718703185123361ULL;
long long int var_6 = 9159813339611193052LL;
short var_11 = (short)-31669;
int zero = 0;
unsigned int var_19 = 2403156465U;
long long int var_20 = 8912877000199818406LL;
long long int var_21 = -2846788798980911259LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
