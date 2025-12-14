#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned short var_3 = (unsigned short)25107;
int var_10 = 297543864;
short var_14 = (short)-29335;
signed char var_15 = (signed char)-14;
unsigned char var_16 = (unsigned char)49;
int zero = 0;
int var_19 = -1560398863;
short var_20 = (short)-8546;
unsigned int var_21 = 1928678213U;
long long int var_22 = -5333602300227118355LL;
_Bool var_23 = (_Bool)1;
int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 242335203;
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
