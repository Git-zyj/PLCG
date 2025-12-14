#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3501825317U;
long long int var_4 = 2739535522231719164LL;
unsigned char var_9 = (unsigned char)219;
int zero = 0;
unsigned int var_11 = 1741942457U;
unsigned long long int var_12 = 9011491676808989434ULL;
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
