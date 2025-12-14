#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 652585207334285061ULL;
unsigned short var_2 = (unsigned short)15395;
long long int var_6 = 3537983303241065528LL;
short var_8 = (short)-28016;
unsigned char var_11 = (unsigned char)87;
int var_16 = -1509473684;
unsigned int var_17 = 3902363216U;
int zero = 0;
signed char var_20 = (signed char)-58;
long long int var_21 = 2400609926134595670LL;
unsigned char var_22 = (unsigned char)232;
short var_23 = (short)3854;
unsigned long long int var_24 = 14143931902332207189ULL;
unsigned short var_25 = (unsigned short)25446;
int var_26 = -1934593814;
signed char var_27 = (signed char)21;
long long int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1530739353625749101LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1698769572;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
