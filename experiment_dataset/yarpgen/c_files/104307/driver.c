#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-7;
unsigned long long int var_4 = 5582151691736640397ULL;
unsigned long long int var_8 = 2965429196585746085ULL;
int var_9 = 98240048;
unsigned int var_10 = 2005050284U;
int var_13 = 1193071715;
unsigned int var_14 = 123812910U;
unsigned int var_19 = 3036000126U;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2723980290U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-29;
long long int var_25 = -7585094516373724968LL;
unsigned short arr_2 [25] ;
unsigned long long int arr_4 [25] [25] ;
short arr_6 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)3650;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 11047311238132927015ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)13712 : (short)29634;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
