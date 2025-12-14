#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2630895846136722965ULL;
unsigned long long int var_3 = 16775410224699352346ULL;
long long int var_4 = 6869318833668753794LL;
unsigned char var_5 = (unsigned char)15;
unsigned int var_10 = 1862609399U;
int zero = 0;
short var_14 = (short)32085;
signed char var_15 = (signed char)-24;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)22633;
unsigned long long int var_18 = 1435337519746951033ULL;
long long int arr_5 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -4866818885046071000LL : -5510577049956315523LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
