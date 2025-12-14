#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned long long int var_1 = 3205091888623784988ULL;
signed char var_3 = (signed char)58;
signed char var_4 = (signed char)-5;
signed char var_5 = (signed char)67;
signed char var_7 = (signed char)21;
unsigned long long int var_9 = 15802873114115773515ULL;
unsigned long long int var_10 = 2399489898984309740ULL;
signed char var_12 = (signed char)29;
signed char var_13 = (signed char)-117;
signed char var_14 = (signed char)-72;
signed char var_15 = (signed char)-119;
signed char var_16 = (signed char)20;
unsigned long long int var_17 = 2622495591796418833ULL;
signed char var_18 = (signed char)-31;
int zero = 0;
unsigned long long int var_19 = 2677857469937798511ULL;
signed char var_20 = (signed char)103;
signed char var_21 = (signed char)116;
signed char var_22 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
