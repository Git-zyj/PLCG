#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
unsigned short var_3 = (unsigned short)1197;
unsigned int var_4 = 3312538627U;
unsigned char var_5 = (unsigned char)132;
_Bool var_7 = (_Bool)1;
long long int var_9 = -696327306705139001LL;
int zero = 0;
unsigned long long int var_19 = 7112172323046269364ULL;
long long int var_20 = -4058761171757255297LL;
unsigned long long int var_21 = 2687675135872264301ULL;
unsigned int var_22 = 1487064704U;
long long int arr_1 [22] ;
long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
signed char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4898524084728422756LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 8848965296415224004LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3935275002U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-106;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
