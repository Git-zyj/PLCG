#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31401;
unsigned long long int var_2 = 3041503675349074159ULL;
unsigned char var_6 = (unsigned char)40;
unsigned long long int var_11 = 11325568119536168507ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3815206525U;
_Bool var_16 = (_Bool)1;
int var_17 = -901472990;
signed char var_18 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
