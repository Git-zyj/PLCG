#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11103448945179422992ULL;
unsigned long long int var_9 = 6542838162277682045ULL;
unsigned short var_10 = (unsigned short)39102;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_17 = (short)27051;
unsigned long long int var_18 = 1101538011409328500ULL;
signed char var_19 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
