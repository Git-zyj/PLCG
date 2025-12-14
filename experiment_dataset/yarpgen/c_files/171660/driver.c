#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-5;
long long int var_6 = 6069973686353977681LL;
unsigned char var_11 = (unsigned char)159;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13533143481509512048ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
