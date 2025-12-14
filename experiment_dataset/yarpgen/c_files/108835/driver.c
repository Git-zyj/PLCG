#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14228;
int var_2 = -1378969601;
_Bool var_3 = (_Bool)1;
int var_6 = -654256765;
long long int var_8 = -961952285849360132LL;
int zero = 0;
unsigned long long int var_20 = 1504898431995373915ULL;
unsigned char var_21 = (unsigned char)167;
signed char var_22 = (signed char)-34;
unsigned char var_23 = (unsigned char)85;
long long int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -8662376892581995911LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
