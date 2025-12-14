#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13364100343261342043ULL;
signed char var_5 = (signed char)-83;
unsigned char var_6 = (unsigned char)46;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 691737576U;
short var_13 = (short)19313;
short var_14 = (short)29941;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
