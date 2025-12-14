#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1431630962827475510LL;
unsigned int var_3 = 3118328937U;
_Bool var_8 = (_Bool)0;
long long int var_9 = -3528896266049029652LL;
_Bool var_14 = (_Bool)0;
int var_15 = -551282688;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)27135;
short var_18 = (short)32427;
long long int var_19 = -3877582764805498081LL;
unsigned short arr_0 [14] ;
long long int arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5211 : (unsigned short)27706;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -7217224126234605448LL : 8551104695726196278LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
