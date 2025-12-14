#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
long long int var_2 = -8711116264929430993LL;
signed char var_3 = (signed char)53;
int zero = 0;
unsigned char var_16 = (unsigned char)149;
unsigned char var_17 = (unsigned char)109;
unsigned int var_18 = 2090736565U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
