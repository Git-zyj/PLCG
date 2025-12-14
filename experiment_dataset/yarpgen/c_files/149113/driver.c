#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)70;
unsigned int var_5 = 3740758873U;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)42564;
unsigned char var_10 = (unsigned char)5;
int var_13 = 1173706151;
int zero = 0;
long long int var_16 = 4624224834655703168LL;
unsigned short var_17 = (unsigned short)10591;
short var_18 = (short)-1879;
signed char var_19 = (signed char)121;
int var_20 = -1808681177;
int var_21 = -1442525846;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 11847760172423315542ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
