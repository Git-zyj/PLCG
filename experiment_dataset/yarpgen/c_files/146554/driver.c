#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3908368602U;
unsigned int var_1 = 3884495996U;
unsigned int var_4 = 4033987470U;
unsigned int var_5 = 3643062276U;
unsigned int var_6 = 1175901630U;
unsigned int var_7 = 2054511837U;
unsigned int var_10 = 871721125U;
unsigned int var_11 = 455435396U;
unsigned int var_15 = 434386253U;
int zero = 0;
unsigned int var_16 = 1834719901U;
unsigned int var_17 = 1129078641U;
unsigned int var_18 = 2886139958U;
unsigned int var_19 = 4102231447U;
unsigned int var_20 = 142571369U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
