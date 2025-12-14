#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1364380217066451914LL;
unsigned char var_7 = (unsigned char)6;
long long int var_11 = 7159848908150670827LL;
unsigned long long int var_13 = 6293524866605134890ULL;
unsigned long long int var_14 = 9955957970674667489ULL;
unsigned long long int var_15 = 5262712853071939612ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 2911960193586950205LL;
unsigned short var_19 = (unsigned short)9071;
short arr_0 [15] ;
signed char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-18599;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)93;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
