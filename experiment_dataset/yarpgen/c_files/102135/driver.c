#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2089604547;
int var_8 = -86961895;
unsigned int var_10 = 3068494038U;
int var_12 = 225533713;
int zero = 0;
unsigned long long int var_13 = 9695051554764423516ULL;
short var_14 = (short)-1585;
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
