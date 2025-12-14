#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -993325719;
signed char var_4 = (signed char)-63;
long long int var_5 = -1118598230976082745LL;
unsigned int var_7 = 3682750220U;
short var_8 = (short)10213;
signed char var_9 = (signed char)87;
long long int var_10 = -3416901913092430839LL;
int var_12 = -19840805;
int zero = 0;
int var_13 = 1226661701;
unsigned short var_14 = (unsigned short)28077;
signed char var_15 = (signed char)53;
int var_16 = -1839844737;
void init() {
}

void checksum() {
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
