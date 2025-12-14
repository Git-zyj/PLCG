#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned char var_1 = (unsigned char)162;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-12;
unsigned long long int var_12 = 16791586096507650405ULL;
int zero = 0;
signed char var_18 = (signed char)104;
signed char var_19 = (signed char)91;
void init() {
}

void checksum() {
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
