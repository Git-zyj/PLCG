#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3143741644U;
unsigned long long int var_3 = 6056486470260626670ULL;
unsigned long long int var_8 = 14282711306190964086ULL;
_Bool var_10 = (_Bool)0;
int var_12 = -1492897817;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2676473642U;
unsigned long long int var_19 = 3105765293914347243ULL;
long long int var_20 = -9101646756598886294LL;
long long int var_21 = 7371806484844214239LL;
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
