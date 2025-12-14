#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned long long int var_1 = 6749295786673968533ULL;
int var_2 = -1841637811;
long long int var_3 = 5020705031707812570LL;
unsigned char var_4 = (unsigned char)123;
int var_5 = 1499349311;
unsigned char var_6 = (unsigned char)105;
unsigned long long int var_7 = 2280267934429559183ULL;
long long int var_8 = -3322642416942428342LL;
unsigned long long int var_9 = 15505331545827963441ULL;
int zero = 0;
unsigned long long int var_10 = 16330416060396399872ULL;
long long int var_11 = 5962144462187145063LL;
unsigned char var_12 = (unsigned char)173;
signed char var_13 = (signed char)-50;
unsigned long long int var_14 = 11952935687699189130ULL;
unsigned long long int var_15 = 8014969126743786792ULL;
unsigned char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)245 : (unsigned char)84;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
