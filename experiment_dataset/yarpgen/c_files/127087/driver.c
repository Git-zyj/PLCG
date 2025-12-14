#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 859368196;
unsigned long long int var_2 = 1021730403436140297ULL;
int var_5 = 1763601892;
int var_7 = 544573481;
int var_9 = -1778617724;
unsigned long long int var_10 = 16388256567518215927ULL;
int zero = 0;
unsigned long long int var_12 = 6086799872204972452ULL;
unsigned long long int var_13 = 10372817246859187308ULL;
int var_14 = 826128839;
void init() {
}

void checksum() {
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
