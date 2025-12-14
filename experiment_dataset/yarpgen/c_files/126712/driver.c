#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
signed char var_1 = (signed char)-93;
signed char var_8 = (signed char)-118;
unsigned long long int var_9 = 7989248883149616318ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3752977281U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
