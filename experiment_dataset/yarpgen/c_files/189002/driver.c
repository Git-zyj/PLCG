#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17173178581995413361ULL;
int var_3 = -1586351056;
unsigned long long int var_4 = 4261000355545676794ULL;
unsigned long long int var_6 = 2631150256128315734ULL;
signed char var_9 = (signed char)-93;
int var_14 = -356010614;
int zero = 0;
short var_18 = (short)-24594;
unsigned long long int var_19 = 9488697811614750481ULL;
unsigned short var_20 = (unsigned short)14191;
_Bool var_21 = (_Bool)0;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -5749298182739464399LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
