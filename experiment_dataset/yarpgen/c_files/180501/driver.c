#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-127;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)23;
long long int var_16 = 8016807200789929375LL;
int zero = 0;
unsigned long long int var_18 = 8698247421915151261ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)18;
unsigned char var_21 = (unsigned char)145;
unsigned short var_22 = (unsigned short)21760;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 17498828889496962681ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
