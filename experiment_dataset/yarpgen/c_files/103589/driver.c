#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12001;
unsigned char var_2 = (unsigned char)235;
unsigned int var_4 = 3288610108U;
unsigned int var_6 = 634437706U;
short var_7 = (short)-8209;
unsigned long long int var_11 = 17052327145288700378ULL;
int zero = 0;
unsigned int var_19 = 4168706896U;
unsigned int var_20 = 4285387479U;
unsigned char var_21 = (unsigned char)110;
unsigned long long int var_22 = 16664226970686717220ULL;
short var_23 = (short)-29246;
_Bool var_24 = (_Bool)1;
unsigned int arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = 1871840691U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
