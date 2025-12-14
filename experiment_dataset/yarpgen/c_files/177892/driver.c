#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11679575857076026940ULL;
int var_1 = 942890342;
signed char var_2 = (signed char)-82;
unsigned int var_3 = 2181904850U;
long long int var_4 = -5531607689454834719LL;
unsigned int var_5 = 2634534010U;
int var_6 = -1431147787;
unsigned int var_7 = 1101798343U;
short var_9 = (short)-11912;
unsigned int var_10 = 2710448883U;
short var_12 = (short)9446;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)-28179;
unsigned long long int var_16 = 7844360499277820079ULL;
long long int var_17 = -7055245267909741390LL;
int var_18 = -1922589823;
unsigned long long int var_19 = 8694403954211856664ULL;
short arr_0 [12] [12] ;
long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)28418;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7390323411515339587LL;
}

void checksum() {
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
