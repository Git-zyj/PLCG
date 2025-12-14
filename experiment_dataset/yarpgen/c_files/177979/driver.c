#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
long long int var_5 = -636592528272972815LL;
long long int var_14 = -2242526579000664838LL;
int zero = 0;
long long int var_15 = 3185424594363904362LL;
unsigned long long int var_16 = 3195958369768389999ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
