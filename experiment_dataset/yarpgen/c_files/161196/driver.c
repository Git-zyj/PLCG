#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4279387542U;
unsigned short var_3 = (unsigned short)29770;
signed char var_5 = (signed char)39;
unsigned int var_7 = 3326162114U;
long long int var_9 = -7076302414743452605LL;
unsigned char var_12 = (unsigned char)35;
signed char var_15 = (signed char)-40;
int zero = 0;
int var_16 = -374306661;
short var_17 = (short)6251;
unsigned long long int var_18 = 8445487812124730351ULL;
_Bool var_19 = (_Bool)1;
unsigned int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 2193765186U;
}

void checksum() {
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
