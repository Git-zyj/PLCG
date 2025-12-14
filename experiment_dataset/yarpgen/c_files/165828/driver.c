#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -681268499729763935LL;
unsigned long long int var_2 = 3543728463554764769ULL;
int var_5 = 92254744;
int var_6 = 53608586;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15768300484568236978ULL;
signed char var_20 = (signed char)91;
int var_21 = 747502513;
signed char var_22 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
