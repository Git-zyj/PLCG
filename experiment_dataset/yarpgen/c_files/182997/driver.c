#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
long long int var_1 = -524163621997762432LL;
unsigned short var_2 = (unsigned short)1473;
int var_3 = 1215857931;
unsigned short var_5 = (unsigned short)64595;
unsigned short var_7 = (unsigned short)41118;
long long int var_9 = -6496245805773185024LL;
int zero = 0;
int var_10 = 1509702867;
unsigned short var_11 = (unsigned short)48190;
unsigned char var_12 = (unsigned char)40;
unsigned short var_13 = (unsigned short)6902;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)89;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
