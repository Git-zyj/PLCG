#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-740;
long long int var_7 = 5268902265543450167LL;
int var_15 = -38453178;
int zero = 0;
unsigned char var_19 = (unsigned char)177;
_Bool var_20 = (_Bool)0;
int var_21 = -779169990;
unsigned int var_22 = 736075843U;
unsigned long long int var_23 = 17269716498654170734ULL;
short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)6692;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
