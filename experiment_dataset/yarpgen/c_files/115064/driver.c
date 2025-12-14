#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2197363762U;
unsigned short var_11 = (unsigned short)35099;
int zero = 0;
unsigned int var_17 = 3987317928U;
long long int var_18 = 2240445547961449143LL;
unsigned int var_19 = 3381285617U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
