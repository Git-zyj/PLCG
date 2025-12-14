#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-46;
long long int var_4 = 6737069188486426376LL;
unsigned short var_5 = (unsigned short)50828;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)5041;
unsigned int var_10 = 3643725961U;
int zero = 0;
signed char var_12 = (signed char)-51;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-37;
unsigned int var_15 = 1519801809U;
int var_16 = -1769690301;
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
