#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
signed char var_1 = (signed char)118;
int var_3 = 985227617;
short var_8 = (short)22547;
int zero = 0;
short var_12 = (short)23797;
_Bool var_13 = (_Bool)0;
int var_14 = -446347199;
signed char var_15 = (signed char)-119;
long long int var_16 = 2660745295123111585LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
