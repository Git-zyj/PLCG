#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7128356669213855582ULL;
signed char var_2 = (signed char)-42;
unsigned long long int var_3 = 2227823607211130788ULL;
unsigned short var_5 = (unsigned short)21320;
unsigned int var_7 = 1639067209U;
unsigned int var_9 = 4013346148U;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = -4205281387251097653LL;
int var_19 = -1224311935;
short var_20 = (short)14880;
unsigned long long int var_21 = 13308338569278682774ULL;
long long int var_22 = 4376596267564660560LL;
unsigned long long int var_23 = 7560530278647659159ULL;
short arr_1 [17] ;
short arr_4 [17] [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-8032;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)4206;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6065291942272285417ULL : 5345882741942932691ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
