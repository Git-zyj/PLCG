#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4449251091452670019LL;
unsigned short var_4 = (unsigned short)55302;
int var_7 = -134664612;
int zero = 0;
unsigned int var_11 = 498816077U;
int var_12 = 1676117348;
long long int var_13 = 2795509151596029464LL;
signed char var_14 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
