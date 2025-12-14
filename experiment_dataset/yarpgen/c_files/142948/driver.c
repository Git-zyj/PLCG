#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
_Bool var_2 = (_Bool)1;
int var_3 = 1671627028;
unsigned short var_9 = (unsigned short)15641;
long long int var_10 = -5321053854069778049LL;
int var_12 = -1940451389;
long long int var_13 = -7375159210062056208LL;
int zero = 0;
long long int var_14 = -912778505696572074LL;
long long int var_15 = 8870506640285688388LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 4920679707629668906LL;
long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -1094268245840293451LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
