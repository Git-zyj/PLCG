#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32830;
_Bool var_2 = (_Bool)0;
long long int var_3 = 4553233182720925787LL;
long long int var_4 = 9048922419901490793LL;
int var_6 = -826352658;
int var_7 = -472396882;
short var_8 = (short)-3887;
_Bool var_10 = (_Bool)1;
int var_11 = 184971421;
short var_12 = (short)24899;
long long int var_13 = 8509699273217952090LL;
short var_14 = (short)-30599;
short var_15 = (short)-9869;
short var_17 = (short)-778;
int zero = 0;
int var_18 = 1813171848;
unsigned short var_19 = (unsigned short)10192;
short var_20 = (short)8781;
unsigned short var_21 = (unsigned short)56694;
short var_22 = (short)17858;
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
