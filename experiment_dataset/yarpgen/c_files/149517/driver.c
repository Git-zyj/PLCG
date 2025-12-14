#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4402055449054299465LL;
unsigned short var_1 = (unsigned short)21715;
int var_2 = 1088192655;
unsigned long long int var_3 = 8867684943027763316ULL;
unsigned long long int var_4 = 15224552609931177224ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 16307582944804080823ULL;
unsigned long long int var_7 = 8653663699783584293ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_13 = (unsigned char)64;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
short var_15 = (short)23918;
unsigned char var_16 = (unsigned char)175;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17880806912340948248ULL;
_Bool var_19 = (_Bool)1;
long long int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4038236395578662999LL;
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
