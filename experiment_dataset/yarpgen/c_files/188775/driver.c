#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -51225981863525112LL;
unsigned long long int var_1 = 6934188566038875076ULL;
unsigned short var_2 = (unsigned short)60128;
unsigned long long int var_3 = 247219073274844434ULL;
signed char var_6 = (signed char)47;
signed char var_9 = (signed char)41;
_Bool var_10 = (_Bool)0;
long long int var_11 = -7591232616807562333LL;
int zero = 0;
unsigned char var_13 = (unsigned char)197;
unsigned char var_14 = (unsigned char)141;
long long int var_15 = 6868997419853518103LL;
unsigned short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54524 : (unsigned short)4491;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
