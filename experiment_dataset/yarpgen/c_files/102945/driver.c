#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
unsigned long long int var_2 = 12016013743506315159ULL;
signed char var_4 = (signed char)82;
unsigned long long int var_5 = 16095464513681225711ULL;
short var_7 = (short)685;
long long int var_8 = -1049936948464314498LL;
signed char var_9 = (signed char)-89;
unsigned long long int var_10 = 16812522583391098707ULL;
int zero = 0;
signed char var_11 = (signed char)86;
unsigned int var_12 = 78797779U;
signed char var_13 = (signed char)47;
unsigned int var_14 = 3347222120U;
short var_15 = (short)31678;
short var_16 = (short)25323;
unsigned char var_17 = (unsigned char)117;
_Bool arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
