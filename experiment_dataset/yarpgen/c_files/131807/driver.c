#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
long long int var_5 = 6268657378477584897LL;
signed char var_8 = (signed char)61;
long long int var_13 = 6293705938527969934LL;
unsigned short var_15 = (unsigned short)2265;
int zero = 0;
unsigned int var_17 = 1270888142U;
unsigned int var_18 = 3936094273U;
signed char var_19 = (signed char)78;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)57926;
short arr_1 [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)18033;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1753022983;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
