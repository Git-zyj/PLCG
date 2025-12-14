#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7654585618409923830LL;
unsigned long long int var_4 = 5587980482513194254ULL;
unsigned short var_6 = (unsigned short)46932;
unsigned short var_7 = (unsigned short)63851;
long long int var_8 = 5161044453942005267LL;
signed char var_10 = (signed char)-120;
long long int var_11 = 4127778180861760309LL;
signed char var_13 = (signed char)54;
int zero = 0;
int var_15 = 191733969;
int var_16 = 684230570;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
