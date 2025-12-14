#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2476996216U;
unsigned int var_2 = 427175922U;
unsigned short var_6 = (unsigned short)31297;
int var_8 = -635369012;
unsigned int var_9 = 1445485683U;
unsigned long long int var_12 = 12427852517138840920ULL;
short var_13 = (short)-19919;
int zero = 0;
unsigned char var_15 = (unsigned char)26;
unsigned short var_16 = (unsigned short)44370;
signed char var_17 = (signed char)-26;
_Bool var_18 = (_Bool)1;
unsigned int arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2109930986U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)27526;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2063477073087417573ULL;
}

void checksum() {
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
