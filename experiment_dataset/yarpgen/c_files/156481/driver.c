#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
short var_2 = (short)10754;
unsigned char var_3 = (unsigned char)125;
unsigned int var_5 = 2458910430U;
short var_7 = (short)28525;
unsigned short var_9 = (unsigned short)38098;
_Bool var_13 = (_Bool)1;
long long int var_15 = 8463552659918079774LL;
int zero = 0;
unsigned char var_16 = (unsigned char)215;
long long int var_17 = 1682660773710789964LL;
unsigned short var_18 = (unsigned short)40933;
long long int var_19 = -399433909900146237LL;
unsigned int var_20 = 3151798457U;
unsigned int var_21 = 248795641U;
long long int var_22 = 6265054295150682235LL;
signed char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)91;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
