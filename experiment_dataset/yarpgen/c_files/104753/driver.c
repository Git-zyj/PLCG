#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5127592480815290166LL;
unsigned long long int var_5 = 3702735640301290888ULL;
unsigned short var_8 = (unsigned short)59445;
unsigned long long int var_9 = 6044405532487402329ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)41168;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)43233;
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
