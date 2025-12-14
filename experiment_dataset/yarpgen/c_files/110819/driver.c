#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3886212062U;
unsigned int var_1 = 3001839985U;
unsigned int var_2 = 4164634730U;
unsigned int var_3 = 1274593695U;
unsigned int var_4 = 3244235139U;
unsigned short var_8 = (unsigned short)16744;
int zero = 0;
unsigned int var_10 = 3009823677U;
unsigned int var_11 = 1773476888U;
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
