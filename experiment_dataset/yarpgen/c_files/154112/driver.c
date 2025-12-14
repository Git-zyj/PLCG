#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_5 = -62516554;
signed char var_9 = (signed char)45;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)54634;
unsigned long long int var_13 = 10833098984170333083ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3737048556U;
int var_22 = 1796909358;
int var_23 = 1918623417;
unsigned long long int var_24 = 15823937540189202900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
