#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1047017009;
long long int var_3 = -5379042021638689753LL;
unsigned short var_4 = (unsigned short)16097;
int var_6 = 1185513154;
int var_7 = -924204324;
unsigned short var_8 = (unsigned short)38138;
long long int var_9 = 1260345993310344323LL;
int zero = 0;
unsigned short var_10 = (unsigned short)17505;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11942555951574477268ULL;
signed char var_13 = (signed char)-67;
unsigned long long int var_14 = 5339257585803255539ULL;
_Bool arr_1 [17] ;
unsigned int arr_2 [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3899146527U : 3647759106U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3372354847U : 4101723679U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
