#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_4 = (signed char)16;
signed char var_7 = (signed char)-42;
long long int var_8 = 166549713552195173LL;
signed char var_9 = (signed char)77;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_17 = -1130531599;
signed char var_18 = (signed char)19;
signed char var_19 = (signed char)54;
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
