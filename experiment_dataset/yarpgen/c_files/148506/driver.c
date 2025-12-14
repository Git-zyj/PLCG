#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1925903793;
unsigned char var_4 = (unsigned char)115;
short var_7 = (short)19406;
int var_8 = -1304585138;
signed char var_14 = (signed char)-78;
int var_16 = 942739288;
int zero = 0;
int var_20 = 597489857;
unsigned char var_21 = (unsigned char)185;
long long int var_22 = 6874028812994977332LL;
unsigned char arr_2 [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)84;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
