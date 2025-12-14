#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1933299959;
long long int var_1 = 3392857723473596052LL;
signed char var_3 = (signed char)-66;
signed char var_4 = (signed char)-20;
int var_5 = -1523114457;
unsigned short var_7 = (unsigned short)49903;
short var_9 = (short)16029;
long long int var_10 = 6338017080342993165LL;
unsigned long long int var_11 = 8274093656077930496ULL;
long long int var_12 = -5328665488497627961LL;
short var_13 = (short)4375;
int var_14 = -81328956;
int zero = 0;
unsigned int var_15 = 3348279058U;
int var_16 = 829461419;
signed char var_17 = (signed char)80;
short var_18 = (short)31915;
int var_19 = 2113494133;
unsigned int var_20 = 4230244574U;
unsigned char var_21 = (unsigned char)165;
unsigned long long int var_22 = 2311148848307250498ULL;
short var_23 = (short)693;
short var_24 = (short)-6606;
int var_25 = 322953210;
unsigned long long int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 6537671204831100637ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
