#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5710730911270372785ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)33673;
_Bool var_10 = (_Bool)1;
long long int var_12 = -8310003579811634936LL;
long long int var_15 = 2609979023989660611LL;
int zero = 0;
unsigned int var_18 = 1844649089U;
unsigned long long int var_19 = 9074780899785394997ULL;
void init() {
}

void checksum() {
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
