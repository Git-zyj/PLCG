#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4233216706527683321LL;
int var_7 = 1629561626;
unsigned int var_9 = 865682348U;
int zero = 0;
unsigned long long int var_12 = 16927034249654274292ULL;
unsigned long long int var_13 = 9022945275854409402ULL;
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
