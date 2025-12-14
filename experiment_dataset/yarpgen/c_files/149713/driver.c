#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
unsigned char var_8 = (unsigned char)85;
signed char var_9 = (signed char)46;
int var_11 = 1945855739;
int zero = 0;
signed char var_13 = (signed char)92;
unsigned long long int var_14 = 16878902937080356116ULL;
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
