#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2380502545U;
unsigned short var_3 = (unsigned short)10050;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)100;
unsigned int var_11 = 2821008009U;
signed char var_12 = (signed char)15;
unsigned long long int var_13 = 8621562369428734806ULL;
signed char var_14 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
