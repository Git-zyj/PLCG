#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3368299585024068419ULL;
int var_3 = -1550730866;
unsigned char var_4 = (unsigned char)238;
signed char var_6 = (signed char)-118;
unsigned char var_10 = (unsigned char)31;
signed char var_11 = (signed char)83;
int zero = 0;
short var_14 = (short)-29385;
unsigned short var_15 = (unsigned short)1139;
signed char var_16 = (signed char)-97;
unsigned char var_17 = (unsigned char)77;
unsigned long long int var_18 = 7222318158613446646ULL;
int var_19 = 158521720;
_Bool var_20 = (_Bool)1;
int var_21 = -959127324;
int var_22 = -1892583402;
short arr_4 [25] [25] [25] ;
unsigned long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-28490;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 7743724313587954780ULL;
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
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
