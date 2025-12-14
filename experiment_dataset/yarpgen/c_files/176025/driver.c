#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5771909123316912693LL;
short var_5 = (short)-32287;
long long int var_8 = 5825517268550014763LL;
short var_10 = (short)16297;
int var_13 = -2049624737;
unsigned long long int var_14 = 11514072026448722897ULL;
int var_17 = 82405664;
unsigned long long int var_18 = 641594152631697027ULL;
int zero = 0;
long long int var_20 = 4393265246237602018LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
_Bool arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
