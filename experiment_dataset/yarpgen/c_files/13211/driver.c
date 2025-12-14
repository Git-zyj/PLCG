#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3603479054U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3644757295U;
long long int var_5 = -408986544375959148LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1753376206U;
int var_8 = -1282589894;
signed char var_9 = (signed char)94;
int zero = 0;
long long int var_10 = 7302781472961589030LL;
unsigned long long int var_11 = 15284362430599650328ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)99;
int var_14 = 1311744013;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
