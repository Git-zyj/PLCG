#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28864;
int var_3 = -1968066921;
unsigned char var_5 = (unsigned char)154;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 8316565651717278320ULL;
unsigned char var_9 = (unsigned char)70;
short var_10 = (short)17071;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-79;
short var_14 = (short)15177;
unsigned char var_16 = (unsigned char)6;
unsigned short var_17 = (unsigned short)14637;
unsigned int var_18 = 393317329U;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
unsigned char var_20 = (unsigned char)177;
short var_21 = (short)16663;
long long int var_22 = -8424367978108345737LL;
_Bool var_23 = (_Bool)0;
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
