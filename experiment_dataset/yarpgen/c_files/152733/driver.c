#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 290301460;
unsigned char var_3 = (unsigned char)207;
int var_4 = 1712388639;
int var_5 = 1902165816;
int var_8 = 616346187;
int zero = 0;
int var_10 = 67899984;
int var_11 = 1333180016;
unsigned long long int var_12 = 13966755641552469123ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
