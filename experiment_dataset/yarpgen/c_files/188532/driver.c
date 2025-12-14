#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)149;
unsigned char var_4 = (unsigned char)27;
unsigned char var_8 = (unsigned char)183;
unsigned char var_13 = (unsigned char)234;
long long int var_14 = -2325678183879015706LL;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
long long int var_21 = -5691260869644336702LL;
long long int var_22 = 9079048935409766873LL;
unsigned char var_23 = (unsigned char)250;
long long int var_24 = 6618657923070794077LL;
long long int var_25 = 3034009088814093030LL;
long long int arr_0 [14] ;
signed char arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -3734070597823788580LL : -9082231301061051300LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-55;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
