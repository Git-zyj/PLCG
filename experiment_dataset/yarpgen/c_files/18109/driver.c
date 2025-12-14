#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24987;
unsigned char var_1 = (unsigned char)238;
unsigned long long int var_2 = 840679434966152579ULL;
signed char var_6 = (signed char)-101;
short var_8 = (short)14971;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-11;
signed char var_12 = (signed char)94;
unsigned int var_13 = 60218175U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)207;
unsigned char var_16 = (unsigned char)58;
unsigned char var_17 = (unsigned char)84;
long long int var_18 = 3342580256123534323LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -174473992045593036LL;
long long int var_21 = 3423913606796415443LL;
signed char arr_0 [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 24053761560140712LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
