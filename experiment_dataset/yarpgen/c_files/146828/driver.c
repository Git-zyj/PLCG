#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6561088191322188448LL;
unsigned short var_4 = (unsigned short)1768;
long long int var_9 = 4009028076727527703LL;
int zero = 0;
long long int var_18 = 5344196960283215503LL;
unsigned short var_19 = (unsigned short)39405;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
