#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6246318615119633014LL;
unsigned long long int var_3 = 5597716355840489761ULL;
unsigned long long int var_4 = 16340263267463150506ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7334997251421949386LL;
unsigned long long int var_10 = 13335132765418751303ULL;
signed char var_12 = (signed char)65;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 784573988U;
int zero = 0;
signed char var_18 = (signed char)-20;
long long int var_19 = -8083419876781204815LL;
unsigned short var_20 = (unsigned short)51999;
signed char var_21 = (signed char)-11;
short var_22 = (short)-25406;
long long int arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 8588368300204806506LL;
}

void checksum() {
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
