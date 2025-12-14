#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 992251031U;
unsigned int var_7 = 1532723646U;
unsigned int var_9 = 2992889009U;
unsigned int var_10 = 2441036782U;
int zero = 0;
unsigned int var_13 = 2470861883U;
unsigned int var_14 = 2588825345U;
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
