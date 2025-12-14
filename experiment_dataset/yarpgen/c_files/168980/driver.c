#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3552170275U;
int var_4 = -1060292485;
int var_9 = -636946729;
unsigned long long int var_10 = 1563497976249774115ULL;
int zero = 0;
unsigned int var_19 = 1462588452U;
unsigned int var_20 = 2796577552U;
int var_21 = 636492222;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
