#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1824217463U;
int var_4 = -87731684;
signed char var_5 = (signed char)-48;
unsigned long long int var_11 = 6965720323357225514ULL;
int zero = 0;
int var_12 = -1535869280;
unsigned long long int var_13 = 17643138456594023415ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
