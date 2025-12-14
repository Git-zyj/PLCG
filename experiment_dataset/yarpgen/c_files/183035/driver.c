#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1339916634U;
unsigned char var_3 = (unsigned char)164;
long long int var_8 = 4469546146691799885LL;
int zero = 0;
long long int var_20 = 8148250671919091598LL;
short var_21 = (short)29924;
long long int var_22 = -3597200703221065567LL;
unsigned char var_23 = (unsigned char)92;
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
