#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned long long int var_15 = 13043957512371933262ULL;
int zero = 0;
unsigned long long int var_19 = 16232810612849379458ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
