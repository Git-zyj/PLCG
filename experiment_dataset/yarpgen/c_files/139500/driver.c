#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11217;
unsigned int var_5 = 3567341900U;
_Bool var_6 = (_Bool)1;
signed char var_15 = (signed char)112;
int zero = 0;
unsigned int var_18 = 3835845878U;
unsigned short var_19 = (unsigned short)39946;
unsigned char var_20 = (unsigned char)177;
unsigned long long int var_21 = 4958262589858968221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
