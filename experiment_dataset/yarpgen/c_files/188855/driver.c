#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34645;
unsigned char var_4 = (unsigned char)12;
int var_5 = -2033837241;
unsigned long long int var_6 = 10176245531237565911ULL;
short var_8 = (short)10884;
unsigned long long int var_10 = 4644230743055240051ULL;
signed char var_11 = (signed char)-58;
signed char var_14 = (signed char)-18;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5147477467197027831LL;
short var_18 = (short)4042;
unsigned char var_19 = (unsigned char)78;
int zero = 0;
short var_20 = (short)15074;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-15472;
short var_23 = (short)8001;
void init() {
}

void checksum() {
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
