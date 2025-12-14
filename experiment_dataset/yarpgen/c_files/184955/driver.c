#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
unsigned long long int var_6 = 6975078617020016763ULL;
signed char var_7 = (signed char)-40;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-10008;
unsigned long long int var_13 = 16098537015216944217ULL;
signed char var_14 = (signed char)-127;
short var_15 = (short)-27375;
unsigned char var_16 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
