#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned short var_2 = (unsigned short)4470;
unsigned char var_4 = (unsigned char)200;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 10249259610306018042ULL;
short var_10 = (short)30434;
int zero = 0;
int var_14 = 2027208677;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
