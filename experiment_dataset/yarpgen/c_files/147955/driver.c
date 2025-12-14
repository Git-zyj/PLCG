#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10539;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)4;
signed char var_4 = (signed char)-19;
signed char var_7 = (signed char)-6;
signed char var_8 = (signed char)-104;
int zero = 0;
unsigned int var_10 = 3431467729U;
long long int var_11 = -7819382333252109377LL;
unsigned long long int var_12 = 2902255172723226245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
