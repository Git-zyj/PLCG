#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
long long int var_1 = -8191277408675568289LL;
unsigned long long int var_2 = 10501406431757152046ULL;
unsigned long long int var_4 = 8366573738374512675ULL;
long long int var_5 = -8244188545961135132LL;
short var_6 = (short)26066;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-1268;
unsigned int var_12 = 2210215538U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)23799;
unsigned int var_15 = 4290751446U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1836900388178529423ULL;
unsigned char arr_1 [21] ;
long long int arr_2 [21] [21] ;
_Bool arr_3 [21] ;
unsigned long long int arr_6 [21] ;
signed char arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 8357108168299033641LL : -8076623647248089474LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 4020609061115298964ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)59;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
