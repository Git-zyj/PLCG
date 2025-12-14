#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
short var_1 = (short)-24485;
long long int var_2 = 8995946687617987555LL;
unsigned char var_3 = (unsigned char)214;
long long int var_4 = -4977700417005555900LL;
_Bool var_5 = (_Bool)0;
int var_6 = -1003960794;
unsigned short var_7 = (unsigned short)61483;
short var_8 = (short)-464;
long long int var_11 = 3340050605940908771LL;
unsigned long long int var_12 = 10862478312685061374ULL;
short var_13 = (short)15317;
unsigned char var_16 = (unsigned char)202;
int zero = 0;
short var_18 = (short)18156;
unsigned short var_19 = (unsigned short)21952;
unsigned int var_20 = 2604454715U;
unsigned char var_21 = (unsigned char)20;
short var_22 = (short)29359;
unsigned char var_23 = (unsigned char)83;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-29459;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
