#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2787205849U;
long long int var_1 = 7419845548748508175LL;
unsigned short var_3 = (unsigned short)11804;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)10;
unsigned int var_8 = 3857568965U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6236046540997851521LL;
int zero = 0;
unsigned int var_13 = 2168220216U;
unsigned short var_14 = (unsigned short)38132;
long long int var_15 = -3747055424480147131LL;
unsigned char var_16 = (unsigned char)51;
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
