#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8429493772735247577LL;
unsigned char var_1 = (unsigned char)54;
signed char var_2 = (signed char)18;
unsigned char var_5 = (unsigned char)211;
long long int var_8 = 4236775041384407537LL;
unsigned int var_10 = 3091114548U;
int var_12 = 2079387555;
int zero = 0;
int var_16 = 2058957045;
unsigned long long int var_17 = 15877941836430994134ULL;
signed char var_18 = (signed char)-74;
unsigned int var_19 = 3802860609U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
