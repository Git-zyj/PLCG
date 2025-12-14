#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -818767238;
signed char var_1 = (signed char)50;
int var_2 = -1456671070;
signed char var_3 = (signed char)-57;
unsigned long long int var_4 = 15794047849605544948ULL;
unsigned short var_5 = (unsigned short)31656;
unsigned long long int var_6 = 5340250018444283866ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3664340538302980919ULL;
long long int var_9 = -3506564609036054915LL;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)92;
short var_14 = (short)17670;
int var_15 = 131514605;
unsigned long long int var_16 = 7908604979826611344ULL;
unsigned short var_17 = (unsigned short)60831;
short var_18 = (short)15823;
signed char var_19 = (signed char)-69;
int zero = 0;
signed char var_20 = (signed char)117;
_Bool var_21 = (_Bool)1;
long long int var_22 = 6702816545982731262LL;
void init() {
}

void checksum() {
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
