#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7374242930376524753LL;
int var_5 = 940247251;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)29;
long long int var_13 = 7477707226100348323LL;
short var_14 = (short)-32057;
unsigned long long int var_15 = 6203433438317632608ULL;
unsigned int var_16 = 1872974926U;
unsigned int var_17 = 45429605U;
_Bool var_18 = (_Bool)1;
short arr_0 [20] ;
long long int arr_5 [20] [20] [20] [20] ;
unsigned short arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)31163;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2323872935722508017LL : 7112908372587405373LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63238 : (unsigned short)56607;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
