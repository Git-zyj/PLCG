#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16698312253353489680ULL;
signed char var_2 = (signed char)122;
unsigned int var_3 = 949706176U;
unsigned char var_5 = (unsigned char)18;
unsigned long long int var_7 = 12406539820102294370ULL;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)-118;
short var_15 = (short)16062;
int zero = 0;
unsigned long long int var_16 = 16666051729156690470ULL;
unsigned char var_17 = (unsigned char)215;
signed char var_18 = (signed char)85;
unsigned int var_19 = 3770643744U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 5823061568062843979ULL;
signed char arr_0 [19] [19] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 8441097318169654049ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
