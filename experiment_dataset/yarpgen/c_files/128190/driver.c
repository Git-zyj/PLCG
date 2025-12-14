#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1125887553U;
long long int var_4 = -5183157021422931889LL;
unsigned long long int var_6 = 2156611632897386528ULL;
unsigned long long int var_7 = 7578849972764398599ULL;
unsigned long long int var_9 = 9835352921192164614ULL;
int zero = 0;
unsigned int var_10 = 1032060098U;
unsigned int var_11 = 44667544U;
signed char var_12 = (signed char)-41;
short var_13 = (short)-3939;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
