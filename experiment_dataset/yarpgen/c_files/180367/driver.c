#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10911;
_Bool var_3 = (_Bool)0;
long long int var_7 = -7639977693829928703LL;
long long int var_13 = -1572672539412137777LL;
unsigned long long int var_14 = 14618234590592899593ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)187;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3570739232U;
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
