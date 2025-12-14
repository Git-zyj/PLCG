#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned long long int var_10 = 12162471347767946748ULL;
long long int var_15 = -3826309177543267179LL;
signed char var_17 = (signed char)31;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)47315;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
