#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned int var_1 = 540871381U;
unsigned long long int var_5 = 7817478631324613442ULL;
unsigned long long int var_8 = 5199052500489949391ULL;
int zero = 0;
signed char var_10 = (signed char)-93;
unsigned char var_11 = (unsigned char)103;
int var_12 = -1471790919;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
