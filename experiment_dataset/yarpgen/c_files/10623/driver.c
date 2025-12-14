#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
long long int var_2 = -9038526376138362224LL;
long long int var_3 = 4431479029470228407LL;
long long int var_7 = -6331158283616407884LL;
unsigned long long int var_8 = 16270393712198709493ULL;
long long int var_12 = 4250097995527838362LL;
int zero = 0;
unsigned char var_13 = (unsigned char)114;
_Bool var_14 = (_Bool)0;
short var_15 = (short)984;
void init() {
}

void checksum() {
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
