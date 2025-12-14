#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1182697882U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-108;
int zero = 0;
unsigned short var_20 = (unsigned short)46123;
unsigned char var_21 = (unsigned char)74;
unsigned long long int var_22 = 11730717813282021373ULL;
int var_23 = 411981869;
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
