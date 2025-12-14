#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -432862144340851117LL;
unsigned char var_4 = (unsigned char)243;
unsigned int var_6 = 629967236U;
int var_8 = 1906760384;
int zero = 0;
signed char var_10 = (signed char)-34;
unsigned long long int var_11 = 12204470964269672076ULL;
short var_12 = (short)29094;
signed char var_13 = (signed char)-60;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3493377247U;
short var_16 = (short)-30622;
unsigned short var_17 = (unsigned short)32848;
unsigned int var_18 = 2554138745U;
unsigned int var_19 = 2729181584U;
unsigned long long int arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 17519066019198766503ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
