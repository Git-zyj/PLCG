#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
short var_1 = (short)19163;
unsigned short var_2 = (unsigned short)22004;
unsigned char var_4 = (unsigned char)201;
unsigned char var_5 = (unsigned char)141;
unsigned long long int var_8 = 12852093168316523260ULL;
unsigned int var_9 = 269686495U;
unsigned short var_11 = (unsigned short)19418;
unsigned short var_12 = (unsigned short)64367;
unsigned short var_13 = (unsigned short)60517;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)56583;
unsigned char var_17 = (unsigned char)50;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 7666342441705355475LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
