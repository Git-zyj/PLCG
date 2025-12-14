#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10473712680702321628ULL;
unsigned long long int var_3 = 7441035739139207278ULL;
unsigned long long int var_4 = 161489758612964714ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-78;
unsigned long long int var_11 = 15873409618617711303ULL;
long long int var_12 = -535221547070449210LL;
int zero = 0;
long long int var_16 = 1089254744184652219LL;
unsigned long long int var_17 = 13151973575898750852ULL;
unsigned short var_18 = (unsigned short)7592;
unsigned long long int var_19 = 2925045190130704459ULL;
unsigned short var_20 = (unsigned short)56195;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
