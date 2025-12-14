#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1263789548U;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-72;
long long int var_7 = 4358920691489148034LL;
unsigned int var_8 = 1411220849U;
int zero = 0;
int var_10 = 416303290;
signed char var_11 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
