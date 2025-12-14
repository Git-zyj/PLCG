#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9813;
unsigned long long int var_2 = 16357846604110198969ULL;
unsigned long long int var_4 = 7769267779412460343ULL;
int var_10 = 1231801728;
unsigned char var_13 = (unsigned char)27;
int zero = 0;
unsigned short var_17 = (unsigned short)4159;
signed char var_18 = (signed char)-51;
unsigned long long int var_19 = 7217172204088281173ULL;
signed char var_20 = (signed char)-106;
unsigned long long int var_21 = 2743593141984273379ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_0 [18] ;
int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 12817802041987015615ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -1930251724;
}

void checksum() {
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
