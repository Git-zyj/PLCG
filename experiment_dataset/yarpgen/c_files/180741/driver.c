#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 379100537U;
unsigned long long int var_6 = 18268003400184221620ULL;
signed char var_10 = (signed char)114;
unsigned int var_11 = 3365308822U;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
