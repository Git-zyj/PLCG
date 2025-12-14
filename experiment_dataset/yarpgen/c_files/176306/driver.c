#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5672235189089797228LL;
signed char var_2 = (signed char)86;
long long int var_3 = -4350255167440682402LL;
unsigned short var_4 = (unsigned short)34904;
unsigned long long int var_6 = 333853740696625490ULL;
unsigned short var_7 = (unsigned short)43399;
unsigned int var_8 = 2504354589U;
unsigned short var_11 = (unsigned short)46689;
unsigned char var_12 = (unsigned char)76;
unsigned long long int var_13 = 13743603001969397594ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)170;
unsigned int var_15 = 4240180754U;
unsigned int var_16 = 3952632750U;
unsigned long long int var_17 = 11947685302507101339ULL;
signed char var_18 = (signed char)40;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3133671513U;
unsigned int var_21 = 2780101131U;
unsigned short arr_0 [10] ;
_Bool arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)39649;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
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
