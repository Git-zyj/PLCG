#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4216816818U;
int var_6 = 1941684368;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = 1296894358;
int var_12 = 1686946497;
signed char var_13 = (signed char)27;
long long int var_15 = 4841426669758865480LL;
unsigned long long int var_18 = 12580499569199859992ULL;
int zero = 0;
int var_19 = 613491361;
long long int var_20 = 1572097944605033888LL;
int var_21 = -390692405;
unsigned int var_22 = 2869107146U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
