#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2222012762U;
int var_3 = 47816471;
unsigned int var_5 = 1409539659U;
unsigned long long int var_6 = 15711932595541117945ULL;
unsigned int var_7 = 857297007U;
unsigned int var_11 = 3119845581U;
int var_13 = -1172648775;
unsigned short var_16 = (unsigned short)42215;
int zero = 0;
int var_18 = 1522831325;
int var_19 = 2030911781;
long long int var_20 = -550488221602118434LL;
short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)9422;
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
