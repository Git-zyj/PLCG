#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1923235937;
long long int var_4 = -8775059970185964207LL;
unsigned int var_5 = 1082032437U;
int zero = 0;
int var_10 = 286608630;
int var_11 = 1648292524;
int var_12 = -1323667759;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
