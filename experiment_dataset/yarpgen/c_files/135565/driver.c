#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9222701711234117363LL;
unsigned short var_1 = (unsigned short)22060;
short var_2 = (short)-19193;
int var_4 = -608227385;
unsigned short var_5 = (unsigned short)58003;
signed char var_6 = (signed char)68;
int var_8 = 1163917107;
long long int var_9 = -3097425734120181776LL;
unsigned int var_10 = 1828815504U;
unsigned short var_12 = (unsigned short)28942;
int var_14 = -85656152;
int zero = 0;
unsigned short var_16 = (unsigned short)52386;
unsigned long long int var_17 = 16033176643703770560ULL;
unsigned short var_18 = (unsigned short)42812;
_Bool var_19 = (_Bool)1;
int var_20 = -1270007530;
long long int arr_0 [12] [12] ;
unsigned char arr_1 [12] [12] ;
_Bool arr_3 [12] [12] ;
long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 3487498568768591559LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)84 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1458017045310859568LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
