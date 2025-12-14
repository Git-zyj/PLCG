#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2537003872482523917LL;
unsigned int var_1 = 1567097069U;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 546524975U;
unsigned short var_4 = (unsigned short)8828;
unsigned int var_5 = 1565989818U;
long long int var_8 = 6329536294004037000LL;
unsigned long long int var_12 = 5182883176995710363ULL;
unsigned long long int var_13 = 9510677784308463142ULL;
signed char var_14 = (signed char)-122;
short var_15 = (short)16373;
int zero = 0;
unsigned int var_16 = 159906068U;
int var_17 = 1253535115;
signed char var_18 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
