#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned long long int var_1 = 6992733799212977387ULL;
signed char var_2 = (signed char)28;
unsigned char var_4 = (unsigned char)14;
short var_5 = (short)28606;
signed char var_6 = (signed char)-46;
long long int var_7 = 7039791714593063169LL;
unsigned char var_8 = (unsigned char)7;
unsigned short var_9 = (unsigned short)45121;
unsigned int var_10 = 940902290U;
unsigned long long int var_11 = 13831089248709198842ULL;
long long int var_12 = 4950079384433412750LL;
unsigned short var_13 = (unsigned short)9088;
unsigned char var_14 = (unsigned char)165;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3704343553849262454LL;
int zero = 0;
short var_18 = (short)-5663;
signed char var_19 = (signed char)-109;
unsigned short var_20 = (unsigned short)10813;
unsigned char var_21 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
