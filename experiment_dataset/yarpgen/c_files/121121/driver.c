#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3135356167U;
unsigned int var_10 = 4152962547U;
unsigned short var_12 = (unsigned short)42801;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2311348961130495485ULL;
unsigned short var_22 = (unsigned short)7631;
unsigned long long int var_23 = 4700530545606536983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
