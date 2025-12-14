#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28603;
unsigned short var_2 = (unsigned short)31526;
_Bool var_3 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)35952;
unsigned long long int var_18 = 14292474670671722615ULL;
unsigned short var_19 = (unsigned short)45250;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
