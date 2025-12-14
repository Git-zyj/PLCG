#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25557;
unsigned char var_2 = (unsigned char)26;
unsigned char var_3 = (unsigned char)197;
unsigned short var_8 = (unsigned short)8183;
int zero = 0;
int var_15 = -1920037724;
unsigned long long int var_16 = 2170943198183428717ULL;
signed char var_17 = (signed char)-120;
unsigned long long int var_18 = 17739300878716532695ULL;
unsigned short var_19 = (unsigned short)59672;
signed char arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-122;
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
