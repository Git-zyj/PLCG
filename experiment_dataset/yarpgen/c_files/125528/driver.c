#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1812532157;
long long int var_6 = 3380012822871002394LL;
unsigned char var_10 = (unsigned char)6;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = -2059109777;
unsigned char var_18 = (unsigned char)35;
int var_19 = 1235394728;
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
