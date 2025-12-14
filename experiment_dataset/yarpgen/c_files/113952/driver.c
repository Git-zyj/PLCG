#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6114137681581517375ULL;
unsigned short var_4 = (unsigned short)40747;
int var_8 = -1007740088;
int var_9 = -1510409086;
int zero = 0;
int var_10 = 1735876489;
unsigned long long int var_11 = 13762281447270182483ULL;
unsigned long long int var_12 = 10941843572453047802ULL;
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
