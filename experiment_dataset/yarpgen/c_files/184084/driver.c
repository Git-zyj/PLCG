#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24552;
unsigned long long int var_6 = 8413451573558248834ULL;
unsigned int var_7 = 2271793843U;
unsigned int var_10 = 1120028068U;
signed char var_13 = (signed char)-98;
short var_14 = (short)-8197;
int zero = 0;
long long int var_17 = 7816800868576463017LL;
unsigned long long int var_18 = 17833199354978045556ULL;
short var_19 = (short)-2156;
unsigned long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 12251835375984863228ULL;
}

void checksum() {
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
