#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5063585512463822827ULL;
long long int var_2 = -6551268064130241683LL;
unsigned long long int var_9 = 2544960469696609817ULL;
int zero = 0;
signed char var_10 = (signed char)-44;
short var_11 = (short)14096;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
