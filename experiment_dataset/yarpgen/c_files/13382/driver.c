#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1322282500;
unsigned short var_5 = (unsigned short)26286;
signed char var_6 = (signed char)-33;
signed char var_11 = (signed char)66;
int zero = 0;
unsigned char var_13 = (unsigned char)160;
long long int var_14 = 3465989471583445286LL;
unsigned int var_15 = 2085968038U;
short var_16 = (short)29981;
short var_17 = (short)29606;
long long int var_18 = -1427183134341111310LL;
int var_19 = 821479363;
unsigned long long int var_20 = 4762376253905362151ULL;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1286850427;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
