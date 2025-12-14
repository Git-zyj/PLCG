#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3018950072U;
unsigned long long int var_1 = 13682549912545772811ULL;
unsigned short var_5 = (unsigned short)23763;
int zero = 0;
unsigned long long int var_13 = 12522996866458725021ULL;
long long int var_14 = 8232997016290292165LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
