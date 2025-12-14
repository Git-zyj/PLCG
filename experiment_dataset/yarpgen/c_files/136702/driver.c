#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15330;
int var_2 = -654025445;
long long int var_3 = 343145390264934032LL;
long long int var_4 = -383111138310878394LL;
unsigned long long int var_5 = 13670831135661768378ULL;
unsigned short var_7 = (unsigned short)8307;
unsigned long long int var_8 = 2461701965646830606ULL;
short var_11 = (short)12061;
short var_12 = (short)-1078;
int zero = 0;
unsigned long long int var_13 = 13779859172334309023ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8159028447799179467LL;
unsigned long long int var_16 = 3449726765595271934ULL;
signed char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)44;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
