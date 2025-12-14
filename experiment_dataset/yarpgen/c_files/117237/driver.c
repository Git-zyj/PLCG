#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
unsigned long long int var_5 = 2574757960471774108ULL;
_Bool var_7 = (_Bool)1;
int var_18 = -986447744;
int zero = 0;
int var_19 = 668369098;
signed char var_20 = (signed char)-87;
unsigned char var_21 = (unsigned char)244;
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
