#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)4578;
signed char var_9 = (signed char)-16;
int var_16 = -760031408;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)118;
unsigned short var_22 = (unsigned short)46412;
long long int var_23 = -6953332119521301171LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
