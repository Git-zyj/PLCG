#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
_Bool var_5 = (_Bool)1;
int var_6 = -643796688;
unsigned char var_15 = (unsigned char)117;
unsigned long long int var_17 = 9896548237644433215ULL;
int zero = 0;
int var_19 = -1552963662;
short var_20 = (short)1716;
_Bool var_21 = (_Bool)1;
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
