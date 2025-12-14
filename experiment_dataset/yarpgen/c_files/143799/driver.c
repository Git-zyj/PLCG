#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63869;
unsigned short var_1 = (unsigned short)46770;
unsigned int var_2 = 1577260384U;
long long int var_3 = 970058349909234189LL;
short var_4 = (short)-30484;
signed char var_6 = (signed char)-62;
unsigned short var_8 = (unsigned short)17055;
signed char var_9 = (signed char)-88;
unsigned short var_10 = (unsigned short)27386;
int zero = 0;
short var_11 = (short)-5956;
int var_12 = 378939619;
unsigned long long int var_13 = 1828946009481236183ULL;
unsigned short var_14 = (unsigned short)44408;
signed char var_15 = (signed char)1;
unsigned int arr_1 [21] [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3387566951U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 11337992463919836988ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
