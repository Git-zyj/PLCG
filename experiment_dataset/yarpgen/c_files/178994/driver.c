#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17045839862578307696ULL;
unsigned long long int var_9 = 1338812318230441322ULL;
long long int var_10 = 8699018634332993086LL;
int zero = 0;
unsigned long long int var_11 = 3806135600291734128ULL;
unsigned char var_12 = (unsigned char)234;
unsigned int var_13 = 1507364052U;
unsigned long long int var_14 = 18168914966588140342ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
