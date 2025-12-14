#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned char var_2 = (unsigned char)68;
unsigned long long int var_3 = 12510755654774719543ULL;
short var_4 = (short)-13434;
long long int var_6 = -1150277225222502161LL;
short var_8 = (short)-256;
unsigned long long int var_11 = 5098408342933668100ULL;
unsigned short var_12 = (unsigned short)50938;
unsigned long long int var_13 = 17182841185108400253ULL;
unsigned long long int var_14 = 2922206326111033712ULL;
long long int var_16 = -118666486436329891LL;
int zero = 0;
unsigned char var_19 = (unsigned char)213;
signed char var_20 = (signed char)79;
long long int var_21 = -5273266663562177848LL;
long long int var_22 = 3493630954426382248LL;
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
