#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1347813284U;
unsigned long long int var_3 = 4295551316602197184ULL;
int var_5 = -232219055;
unsigned int var_7 = 3161871222U;
unsigned long long int var_8 = 10988887972230083579ULL;
unsigned long long int var_9 = 13047011098619950362ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)29;
unsigned long long int var_12 = 16869639803614822903ULL;
unsigned short var_13 = (unsigned short)40489;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)232;
unsigned int var_16 = 3210448111U;
unsigned int var_17 = 1720302519U;
long long int var_18 = 8754891706017309777LL;
unsigned long long int arr_10 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 12741065463230469208ULL : 14841151227326017703ULL;
}

void checksum() {
    hash(&seed, var_11);
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
