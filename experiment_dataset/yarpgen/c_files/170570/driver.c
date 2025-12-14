#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3237079864644780281ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 6574680032770024256ULL;
unsigned short var_4 = (unsigned short)16918;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1475068147U;
int zero = 0;
signed char var_14 = (signed char)-71;
unsigned short var_15 = (unsigned short)8431;
unsigned long long int var_16 = 5438817070232152018ULL;
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
