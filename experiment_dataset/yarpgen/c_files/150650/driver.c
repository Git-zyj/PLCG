#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1556813221;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1003387020U;
long long int var_8 = -3411732079780301326LL;
signed char var_15 = (signed char)-115;
int zero = 0;
int var_19 = -565691706;
unsigned long long int var_20 = 1304187894751093650ULL;
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
