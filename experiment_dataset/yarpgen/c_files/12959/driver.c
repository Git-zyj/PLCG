#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5870994547587416572ULL;
long long int var_1 = -4376829003349895238LL;
_Bool var_2 = (_Bool)1;
int var_5 = -801770851;
int var_13 = 2138923442;
int zero = 0;
long long int var_20 = 1264856294595895646LL;
unsigned short var_21 = (unsigned short)21241;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -6250339354556944898LL : 4584591696049038949LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
