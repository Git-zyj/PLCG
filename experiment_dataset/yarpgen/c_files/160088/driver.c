#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24309;
unsigned long long int var_3 = 3029983644365497795ULL;
int var_4 = -155622466;
int var_6 = -915753438;
long long int var_8 = 1754486744067641302LL;
unsigned long long int var_9 = 660875070096884035ULL;
unsigned int var_10 = 620181483U;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-48;
unsigned char var_14 = (unsigned char)194;
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
