#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
unsigned short var_3 = (unsigned short)25112;
unsigned long long int var_4 = 9723671103196069525ULL;
int var_5 = -1158276630;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)12708;
unsigned short var_9 = (unsigned short)62515;
unsigned long long int var_11 = 15026556279938893291ULL;
int zero = 0;
long long int var_16 = -8221610242329163279LL;
_Bool var_17 = (_Bool)1;
int var_18 = 1132261018;
long long int var_19 = 6224610569662295766LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-7123;
unsigned short var_22 = (unsigned short)57892;
signed char var_23 = (signed char)-108;
unsigned short var_24 = (unsigned short)27099;
_Bool arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
