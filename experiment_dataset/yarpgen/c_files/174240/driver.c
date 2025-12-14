#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned short var_3 = (unsigned short)716;
unsigned int var_6 = 2353181957U;
unsigned int var_8 = 2864570642U;
signed char var_11 = (signed char)102;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)24015;
short var_17 = (short)-10243;
int var_18 = 223080372;
short var_19 = (short)25483;
signed char var_20 = (signed char)18;
long long int arr_0 [17] [17] ;
unsigned int arr_1 [17] [17] ;
int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -3580126748983082738LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1883005696U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 796376771;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
