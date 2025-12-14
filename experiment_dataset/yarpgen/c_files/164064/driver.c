#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1747886084;
short var_1 = (short)18819;
short var_2 = (short)5974;
unsigned int var_3 = 2398567055U;
unsigned int var_5 = 2128552322U;
long long int var_6 = 4214425189811355506LL;
signed char var_7 = (signed char)-79;
unsigned short var_8 = (unsigned short)21716;
short var_10 = (short)-1869;
int var_11 = -768409305;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)176;
unsigned short var_14 = (unsigned short)26648;
unsigned long long int var_15 = 3096212278841711072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
