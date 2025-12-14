#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16807;
long long int var_2 = 6031272415265862807LL;
short var_4 = (short)11600;
signed char var_6 = (signed char)25;
signed char var_8 = (signed char)58;
signed char var_10 = (signed char)50;
unsigned char var_12 = (unsigned char)169;
unsigned char var_13 = (unsigned char)4;
int zero = 0;
short var_14 = (short)9048;
long long int var_15 = 2586461200251914627LL;
_Bool var_16 = (_Bool)0;
int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1307743816;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
