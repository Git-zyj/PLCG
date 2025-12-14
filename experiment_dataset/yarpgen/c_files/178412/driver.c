#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
_Bool var_1 = (_Bool)1;
long long int var_4 = 5092249282651246389LL;
short var_5 = (short)-19428;
unsigned char var_10 = (unsigned char)3;
unsigned long long int var_18 = 15801817111251477734ULL;
int zero = 0;
int var_19 = -1228276950;
short var_20 = (short)-3532;
short var_21 = (short)-32764;
int var_22 = 1325831686;
signed char var_23 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
