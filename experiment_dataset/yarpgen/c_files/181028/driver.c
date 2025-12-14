#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1796339736889265793ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 14521393849882094087ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-15711;
signed char var_12 = (signed char)-96;
unsigned long long int var_13 = 12016019839981719635ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 1119008209;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
