#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
signed char var_1 = (signed char)8;
signed char var_2 = (signed char)-26;
signed char var_3 = (signed char)-89;
signed char var_4 = (signed char)17;
signed char var_5 = (signed char)72;
signed char var_7 = (signed char)112;
signed char var_8 = (signed char)104;
signed char var_9 = (signed char)-45;
signed char var_10 = (signed char)-118;
signed char var_11 = (signed char)-44;
signed char var_12 = (signed char)49;
signed char var_15 = (signed char)39;
int zero = 0;
signed char var_16 = (signed char)-71;
signed char var_17 = (signed char)-70;
signed char var_18 = (signed char)-45;
signed char var_19 = (signed char)-53;
signed char var_20 = (signed char)72;
signed char arr_1 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)-72;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
