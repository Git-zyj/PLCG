#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 340920779U;
unsigned short var_5 = (unsigned short)64862;
short var_7 = (short)26921;
unsigned int var_8 = 2841897010U;
signed char var_10 = (signed char)-57;
short var_11 = (short)-15376;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-31304;
long long int var_17 = -5571598396968589566LL;
unsigned long long int var_18 = 4703579437434814155ULL;
int zero = 0;
signed char var_19 = (signed char)78;
long long int var_20 = -8540284259747586237LL;
signed char var_21 = (signed char)-81;
unsigned char var_22 = (unsigned char)18;
unsigned char var_23 = (unsigned char)104;
void init() {
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
