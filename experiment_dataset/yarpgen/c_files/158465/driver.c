#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned long long int var_2 = 13054155638156428216ULL;
unsigned long long int var_3 = 9969571456616591757ULL;
_Bool var_8 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6887027870669389064ULL;
int zero = 0;
signed char var_17 = (signed char)25;
unsigned char var_18 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
