#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
short var_1 = (short)9632;
int var_2 = 1873068640;
short var_3 = (short)-13486;
unsigned int var_5 = 3594067215U;
long long int var_6 = -8856964460091721958LL;
short var_7 = (short)-28872;
int var_8 = 1446020511;
int var_9 = -470159838;
unsigned long long int var_10 = 1033636781721224662ULL;
unsigned long long int var_11 = 12346686664527321911ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)4357;
unsigned int var_14 = 2984517101U;
long long int var_15 = 7271633195656525470LL;
short var_16 = (short)14893;
unsigned int var_17 = 3698618940U;
int arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 650099134;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 994321978U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -785538630;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
