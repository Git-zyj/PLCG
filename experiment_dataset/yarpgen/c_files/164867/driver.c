#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3534303257U;
int var_3 = -1875716741;
int var_4 = 413358169;
unsigned int var_6 = 1080896824U;
unsigned short var_8 = (unsigned short)32018;
int zero = 0;
int var_11 = 1194798310;
signed char var_12 = (signed char)18;
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
