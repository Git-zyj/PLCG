#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64842;
unsigned long long int var_2 = 9128306641258296975ULL;
unsigned char var_3 = (unsigned char)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 6044407662157081503ULL;
int var_8 = 1343963895;
int var_9 = 786440331;
int zero = 0;
signed char var_11 = (signed char)-36;
unsigned long long int var_12 = 17536711117268101995ULL;
long long int var_13 = -1110209733755468569LL;
signed char var_14 = (signed char)-61;
unsigned short var_15 = (unsigned short)5085;
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
