#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3306623392U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)4652;
unsigned short var_4 = (unsigned short)49723;
unsigned int var_5 = 881513087U;
unsigned int var_6 = 3413747430U;
int var_7 = 1596911370;
unsigned short var_8 = (unsigned short)61463;
short var_9 = (short)-20650;
int zero = 0;
short var_10 = (short)15542;
int var_11 = 2022215269;
int var_12 = 1168495394;
unsigned char var_13 = (unsigned char)240;
long long int var_14 = -5083312531749907741LL;
_Bool arr_0 [14] ;
_Bool arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
