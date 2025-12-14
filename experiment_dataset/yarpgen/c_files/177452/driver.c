#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1983458930459080916LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_13 = 6781982006915305731ULL;
unsigned int var_16 = 1486382734U;
int zero = 0;
long long int var_19 = -3693943059590898521LL;
signed char var_20 = (signed char)73;
unsigned int var_21 = 483183178U;
unsigned short var_22 = (unsigned short)42159;
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
