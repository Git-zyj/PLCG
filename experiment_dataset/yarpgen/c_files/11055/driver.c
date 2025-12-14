#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
signed char var_1 = (signed char)-59;
int var_2 = 961351191;
unsigned int var_4 = 1270787985U;
signed char var_6 = (signed char)117;
unsigned int var_7 = 4027843276U;
unsigned short var_8 = (unsigned short)33551;
unsigned char var_9 = (unsigned char)73;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1793597616106292819ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
