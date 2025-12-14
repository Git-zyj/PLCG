#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)113;
unsigned short var_4 = (unsigned short)46984;
unsigned long long int var_10 = 5192432551394673800ULL;
int zero = 0;
int var_13 = -1715921961;
int var_14 = 1851962439;
unsigned char var_15 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
