#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -907867670;
unsigned long long int var_10 = 2394798045227982772ULL;
unsigned long long int var_11 = 15484195857170774494ULL;
int zero = 0;
int var_20 = -241125248;
long long int var_21 = 8932972924437512640LL;
int var_22 = -1127440272;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
