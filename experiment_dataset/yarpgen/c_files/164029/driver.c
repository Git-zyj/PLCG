#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_10 = (signed char)-77;
long long int var_11 = -8286087958631505142LL;
int zero = 0;
unsigned int var_15 = 1905882978U;
long long int var_16 = 6540158877226716452LL;
long long int var_17 = -4229343503560816779LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
