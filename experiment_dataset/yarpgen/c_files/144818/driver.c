#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5444582482965896618LL;
int var_3 = 327880522;
long long int var_4 = -7712861700074737639LL;
long long int var_5 = -7343124240182652291LL;
long long int var_6 = -5970961020033638006LL;
int var_8 = -510501138;
long long int var_10 = -4458104179332380704LL;
unsigned long long int var_11 = 6221509171880106931ULL;
unsigned long long int var_12 = 6430501327609250898ULL;
unsigned int var_13 = 1033460290U;
int zero = 0;
int var_14 = 1154412465;
signed char var_15 = (signed char)13;
short var_16 = (short)-4380;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8518435886000172617LL : -6542540533123221773LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
