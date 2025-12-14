#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3245308568U;
unsigned short var_3 = (unsigned short)14810;
long long int var_4 = 915795126870697697LL;
int zero = 0;
int var_12 = -1540075508;
long long int var_13 = 5470746790846014939LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
