#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
short var_3 = (short)-11612;
unsigned int var_4 = 945615714U;
unsigned int var_5 = 179602713U;
long long int var_6 = -2731310296380777813LL;
int var_9 = 1430275338;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)34560;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int var_17 = -304891781;
int zero = 0;
unsigned int var_18 = 674090544U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 1152737740338156872ULL;
int var_21 = -759713923;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
