#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
short var_5 = (short)9737;
int var_6 = 852495292;
_Bool var_9 = (_Bool)1;
short var_10 = (short)1905;
int var_11 = 1364409381;
signed char var_12 = (signed char)10;
int zero = 0;
int var_13 = 738954494;
signed char var_14 = (signed char)56;
unsigned char var_15 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
