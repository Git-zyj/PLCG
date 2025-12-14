#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3477855263U;
long long int var_5 = -2227293091531815011LL;
int zero = 0;
int var_11 = -863454958;
unsigned int var_12 = 453355922U;
unsigned long long int var_13 = 7162452679162162665ULL;
long long int var_14 = 9196297756678112428LL;
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
