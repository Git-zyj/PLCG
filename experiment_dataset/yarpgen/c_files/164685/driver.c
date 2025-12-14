#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)38802;
int var_7 = 145775813;
int var_9 = 314404460;
int zero = 0;
signed char var_18 = (signed char)-10;
int var_19 = 1116252039;
unsigned long long int var_20 = 10352872012793144419ULL;
short arr_1 [14] ;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)3152;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 415365499U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
