#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4249322333U;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_7 = 972384817224536274LL;
short var_9 = (short)17782;
int zero = 0;
long long int var_10 = 4926289436559524331LL;
unsigned short var_11 = (unsigned short)10706;
unsigned int var_12 = 275509267U;
unsigned short var_13 = (unsigned short)43112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
