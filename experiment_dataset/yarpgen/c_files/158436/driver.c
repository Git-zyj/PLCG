#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2085720721602754311ULL;
signed char var_7 = (signed char)-112;
unsigned int var_8 = 2325626778U;
unsigned short var_11 = (unsigned short)20100;
signed char var_12 = (signed char)-20;
long long int var_13 = 3748225805861095779LL;
short var_14 = (short)-9255;
int zero = 0;
short var_18 = (short)-3971;
int var_19 = -855487285;
short var_20 = (short)21452;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4794907052892092527LL;
void init() {
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
