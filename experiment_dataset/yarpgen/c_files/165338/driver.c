#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-39;
_Bool var_6 = (_Bool)1;
long long int var_7 = -9004540950442584105LL;
unsigned long long int var_11 = 17697076324553569293ULL;
int zero = 0;
long long int var_19 = -2177395011723884419LL;
unsigned long long int var_20 = 7689266984548179072ULL;
short var_21 = (short)19573;
int var_22 = 818698436;
long long int var_23 = -2390321995567813766LL;
unsigned short arr_0 [24] ;
long long int arr_1 [24] ;
long long int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)16968;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3998744903268005719LL : 9169452883864960470LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1043978566433957955LL;
}

void checksum() {
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
