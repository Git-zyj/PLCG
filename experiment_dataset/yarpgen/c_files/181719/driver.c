#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7178987084334912912LL;
short var_1 = (short)13699;
unsigned long long int var_2 = 3086845994681836801ULL;
short var_3 = (short)4591;
unsigned long long int var_6 = 1477761732385198064ULL;
unsigned short var_7 = (unsigned short)12868;
short var_8 = (short)-26005;
unsigned int var_9 = 3261670640U;
unsigned long long int var_10 = 7783975533367883547ULL;
unsigned int var_12 = 2042553958U;
int zero = 0;
long long int var_14 = -2528360228524952332LL;
long long int var_15 = -6356554945534571158LL;
unsigned long long int var_16 = 11354987544839977493ULL;
signed char var_17 = (signed char)80;
unsigned short var_18 = (unsigned short)6948;
unsigned short var_19 = (unsigned short)25113;
short var_20 = (short)-16449;
unsigned long long int var_21 = 1510817211430265025ULL;
short arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
long long int arr_5 [24] [24] ;
long long int arr_3 [11] ;
short arr_4 [11] ;
long long int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-13751;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 1314393674U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)49909;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 4155736073492365828LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 6045880577169634493LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-31124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 3367123262913502630LL : 7846558099723366059LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
