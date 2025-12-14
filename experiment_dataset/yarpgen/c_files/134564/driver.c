#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-120;
short var_3 = (short)7626;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 6150499799478326205ULL;
int zero = 0;
unsigned long long int var_18 = 5523115381354068559ULL;
signed char var_19 = (signed char)100;
long long int var_20 = -6424061744328673055LL;
int arr_1 [25] ;
unsigned char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -914372199;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)111;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
