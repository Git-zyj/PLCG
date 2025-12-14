#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1891249394;
unsigned int var_5 = 3652123832U;
unsigned short var_7 = (unsigned short)43233;
int var_8 = 1630920608;
int var_9 = -1176440021;
int var_13 = -87245593;
long long int var_14 = -6592920401444849169LL;
unsigned int var_15 = 2449844127U;
int var_16 = 1350275215;
int zero = 0;
long long int var_17 = -5851043489678935910LL;
int var_18 = -1092732923;
unsigned short var_19 = (unsigned short)28163;
unsigned short var_20 = (unsigned short)10693;
int var_21 = 179333717;
int arr_0 [25] ;
int arr_1 [25] ;
unsigned short arr_4 [25] [25] ;
int arr_2 [25] ;
long long int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1973421088;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1054717112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36489 : (unsigned short)7384;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -138623465;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1360525041576004193LL : -2267517725333127150LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
