#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -968034067641733579LL;
unsigned long long int var_1 = 6879394768579693292ULL;
signed char var_3 = (signed char)-24;
signed char var_4 = (signed char)84;
unsigned short var_6 = (unsigned short)3555;
long long int var_7 = 7771760327300955193LL;
int var_8 = -974684401;
int var_11 = -1672692441;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
