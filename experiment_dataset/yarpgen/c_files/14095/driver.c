#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
int var_1 = -1152005640;
int var_2 = -1765318041;
_Bool var_3 = (_Bool)0;
int var_5 = 589098009;
unsigned short var_6 = (unsigned short)57735;
short var_7 = (short)7937;
unsigned int var_8 = 1444162741U;
int var_9 = -1833707003;
int var_10 = -1942038073;
signed char var_13 = (signed char)-116;
unsigned int var_14 = 621422565U;
unsigned int var_15 = 117425039U;
int var_16 = -33894933;
long long int var_18 = 2320364411832936214LL;
int zero = 0;
int var_19 = -878474370;
short var_20 = (short)20718;
unsigned int var_21 = 1620257839U;
int var_22 = -704679455;
int var_23 = 1310977332;
long long int var_24 = -7755023783618175102LL;
_Bool arr_1 [17] ;
unsigned int arr_2 [17] [17] [17] ;
unsigned short arr_4 [17] ;
int arr_5 [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 162611476U : 3637700603U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)27256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1771028111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)5786 : (unsigned short)40603;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
