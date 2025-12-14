#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1261355248;
unsigned short var_4 = (unsigned short)62553;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3598133129U;
int zero = 0;
unsigned long long int var_12 = 3581686796385355430ULL;
signed char var_13 = (signed char)-85;
signed char var_14 = (signed char)41;
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
