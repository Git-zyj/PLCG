#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3893560499824158082LL;
unsigned short var_1 = (unsigned short)25524;
signed char var_2 = (signed char)97;
long long int var_3 = 2803857215357025793LL;
unsigned char var_5 = (unsigned char)198;
unsigned long long int var_8 = 12073618320926992365ULL;
unsigned char var_9 = (unsigned char)215;
unsigned long long int var_11 = 11996327323079243658ULL;
long long int var_12 = 607836387250523413LL;
int zero = 0;
int var_14 = 241886722;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)140;
unsigned int var_17 = 3220448173U;
long long int var_18 = -7612065794182498846LL;
_Bool arr_0 [19] ;
unsigned char arr_2 [19] ;
_Bool arr_4 [19] ;
unsigned long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5546275809102197707ULL : 2769369677452984353ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
