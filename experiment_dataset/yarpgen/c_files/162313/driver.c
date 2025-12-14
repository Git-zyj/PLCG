#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
signed char var_2 = (signed char)86;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-118;
unsigned long long int var_19 = 6714841483159083231ULL;
unsigned char var_20 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
