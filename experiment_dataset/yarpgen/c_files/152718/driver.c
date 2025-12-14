#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5013338819092811872ULL;
long long int var_4 = 8312681798303786909LL;
unsigned char var_10 = (unsigned char)14;
int zero = 0;
long long int var_11 = 6298257860340556023LL;
signed char var_12 = (signed char)-58;
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
