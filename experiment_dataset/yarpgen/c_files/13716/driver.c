#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4035913980U;
unsigned int var_3 = 554157508U;
unsigned long long int var_4 = 10671007391397255317ULL;
unsigned int var_5 = 2074225742U;
unsigned char var_6 = (unsigned char)47;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-19430;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)212;
int zero = 0;
unsigned int var_14 = 2634113047U;
unsigned int var_15 = 2996991332U;
unsigned int var_16 = 849698153U;
unsigned int var_17 = 1940844673U;
unsigned int var_18 = 3566181222U;
unsigned int var_19 = 2941938459U;
unsigned char var_20 = (unsigned char)111;
unsigned int var_21 = 183847474U;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 3308716590817613624ULL;
unsigned int arr_1 [25] ;
unsigned int arr_7 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 775593698U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 40193983U;
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
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
