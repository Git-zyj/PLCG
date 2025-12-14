#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-95;
unsigned long long int var_9 = 11622065912669777792ULL;
int zero = 0;
signed char var_17 = (signed char)-40;
unsigned long long int var_18 = 16464512528041417400ULL;
unsigned long long int var_19 = 9595147363848569171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
