#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1447842814;
int var_2 = -940765660;
int var_5 = -1372654807;
unsigned long long int var_11 = 5025063009018965294ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)240;
int var_15 = 187184822;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
