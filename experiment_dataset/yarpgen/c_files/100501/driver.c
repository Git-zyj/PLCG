#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)125;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)106;
unsigned int var_10 = 889103490U;
long long int var_17 = 7497647917858403589LL;
int zero = 0;
unsigned int var_18 = 887018764U;
short var_19 = (short)-5571;
unsigned long long int var_20 = 5620992995955577063ULL;
unsigned int var_21 = 2862131558U;
unsigned int var_22 = 755155876U;
long long int var_23 = 5389355953702092906LL;
unsigned char arr_2 [21] [21] ;
short arr_3 [21] ;
short arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)18348;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-3475;
}

void checksum() {
    hash(&seed, var_18);
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
