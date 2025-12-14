#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)41552;
signed char var_8 = (signed char)-79;
long long int var_9 = -6307555177517194916LL;
int zero = 0;
long long int var_12 = -8409467765764793518LL;
unsigned long long int var_13 = 3435993212557641882ULL;
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
