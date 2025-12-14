#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)23245;
_Bool var_3 = (_Bool)0;
short var_4 = (short)9780;
unsigned char var_7 = (unsigned char)111;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-117;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)61;
int zero = 0;
unsigned long long int var_14 = 5068155302756080679ULL;
unsigned short var_15 = (unsigned short)47565;
unsigned char var_16 = (unsigned char)20;
unsigned long long int var_17 = 10570621221718355924ULL;
short var_18 = (short)3029;
unsigned char var_19 = (unsigned char)135;
unsigned char arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)72;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
