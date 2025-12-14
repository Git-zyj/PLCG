#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 1177601848363774668ULL;
signed char var_12 = (signed char)21;
_Bool var_17 = (_Bool)1;
unsigned long long int var_19 = 15301310901646576547ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)34209;
unsigned int var_21 = 3567705543U;
void init() {
}

void checksum() {
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
