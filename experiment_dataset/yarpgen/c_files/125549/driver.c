#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
unsigned long long int var_2 = 13286770450999113255ULL;
long long int var_5 = 5273860245222507602LL;
unsigned short var_8 = (unsigned short)11725;
long long int var_9 = 3300236830951123319LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16590451259680105924ULL;
signed char var_12 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
