#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9336175379001939688ULL;
unsigned int var_7 = 3634711136U;
unsigned char var_9 = (unsigned char)194;
signed char var_12 = (signed char)46;
int zero = 0;
int var_15 = 1044848803;
signed char var_16 = (signed char)47;
int var_17 = 417355475;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
