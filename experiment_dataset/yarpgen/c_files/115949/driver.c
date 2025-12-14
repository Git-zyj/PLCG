#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 924009619U;
int var_15 = 22889456;
int zero = 0;
long long int var_19 = 2039980815607242297LL;
unsigned long long int var_20 = 16589821160795609179ULL;
unsigned int var_21 = 2384888284U;
unsigned short var_22 = (unsigned short)26191;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
