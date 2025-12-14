#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2935694741U;
unsigned short var_7 = (unsigned short)46617;
unsigned int var_8 = 1743799598U;
int zero = 0;
long long int var_11 = 4533766070141399830LL;
unsigned int var_12 = 621080219U;
void init() {
}

void checksum() {
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
