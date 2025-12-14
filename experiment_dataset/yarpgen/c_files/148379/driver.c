#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1792563114U;
signed char var_7 = (signed char)-127;
long long int var_10 = 4471593178894706312LL;
int zero = 0;
unsigned int var_19 = 765762901U;
long long int var_20 = 2431619762711502900LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
