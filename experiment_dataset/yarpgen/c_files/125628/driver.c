#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)135;
unsigned char var_8 = (unsigned char)157;
unsigned int var_11 = 779848975U;
int zero = 0;
int var_19 = 1132219883;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-27430;
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
