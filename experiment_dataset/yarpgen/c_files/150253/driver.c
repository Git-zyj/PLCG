#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)181;
short var_3 = (short)-16881;
unsigned long long int var_4 = 4867943609040421688ULL;
signed char var_10 = (signed char)104;
unsigned long long int var_14 = 4557526342389324683ULL;
int zero = 0;
unsigned int var_17 = 3050095587U;
unsigned long long int var_18 = 11841912813749097800ULL;
void init() {
}

void checksum() {
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
