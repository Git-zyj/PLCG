#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8877887612105000241LL;
long long int var_4 = 6711299284269978392LL;
long long int var_10 = -2747460156099906698LL;
long long int var_11 = 3227279854459588721LL;
int zero = 0;
long long int var_13 = 9097319502735456120LL;
long long int var_14 = 8675449641657528245LL;
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
