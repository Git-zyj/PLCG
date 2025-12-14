#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5466281409922934894LL;
_Bool var_6 = (_Bool)1;
int var_8 = 958831174;
signed char var_10 = (signed char)26;
int zero = 0;
unsigned short var_13 = (unsigned short)33518;
int var_14 = 1324915066;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
