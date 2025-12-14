#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
unsigned int var_1 = 4002348747U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3242733210U;
long long int var_5 = 7812891798141426361LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_11 = (short)-20015;
long long int var_12 = 5180993659174475045LL;
int var_13 = -684017288;
unsigned short var_14 = (unsigned short)64326;
unsigned char var_15 = (unsigned char)36;
short arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-24549 : (short)17490;
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
