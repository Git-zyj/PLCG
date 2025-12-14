#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6133;
unsigned long long int var_1 = 6347892775217192475ULL;
unsigned long long int var_4 = 12732437808418766762ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2493021335049090245ULL;
unsigned short var_8 = (unsigned short)36412;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2692321112039343449LL;
int zero = 0;
long long int var_16 = -8895978607291991483LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)16188;
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
