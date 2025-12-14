#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2803121078U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 650814713U;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-113;
unsigned long long int var_10 = 17861447011798456675ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int var_14 = 1266533454;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
