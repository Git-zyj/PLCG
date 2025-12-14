#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40562;
short var_1 = (short)-7430;
short var_2 = (short)-24522;
_Bool var_3 = (_Bool)1;
long long int var_4 = -8715913867631225072LL;
signed char var_5 = (signed char)-103;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17978194311522806742ULL;
unsigned char var_8 = (unsigned char)166;
unsigned int var_10 = 2086043363U;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
long long int var_12 = 3732077472503660104LL;
signed char var_13 = (signed char)93;
signed char var_14 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
