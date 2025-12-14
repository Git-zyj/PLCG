#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9451451228715364675ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-108;
long long int var_11 = -4104067544513374145LL;
unsigned long long int var_13 = 8377453632531770380ULL;
short var_15 = (short)14206;
unsigned int var_16 = 1218449598U;
int zero = 0;
unsigned int var_18 = 2032172209U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5140424805857486756ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
