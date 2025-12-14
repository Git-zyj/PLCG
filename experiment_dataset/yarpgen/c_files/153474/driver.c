#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13341;
unsigned long long int var_3 = 3459621348204518933ULL;
unsigned long long int var_4 = 4467383729627531178ULL;
unsigned short var_5 = (unsigned short)52620;
unsigned short var_13 = (unsigned short)10168;
unsigned int var_16 = 4287348707U;
unsigned long long int var_17 = 11200376075616511587ULL;
unsigned short var_18 = (unsigned short)56759;
signed char var_19 = (signed char)62;
int zero = 0;
unsigned short var_20 = (unsigned short)57727;
unsigned short var_21 = (unsigned short)10682;
long long int var_22 = 7934011075788501501LL;
unsigned int var_23 = 960486585U;
long long int var_24 = 4321980454218507760LL;
short var_25 = (short)7018;
unsigned int var_26 = 2344675178U;
short arr_4 [17] ;
unsigned long long int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-21584 : (short)-31200;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 7698309184266280944ULL : 5278695310035700040ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
