#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -993081381;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 1524130930931550895ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4147898168U;
unsigned long long int var_5 = 6357754879006711370ULL;
unsigned short var_6 = (unsigned short)8974;
short var_7 = (short)27626;
int var_8 = -2099359861;
unsigned long long int var_9 = 9457369800068122415ULL;
unsigned long long int var_10 = 9256385290203483590ULL;
int var_13 = 721243681;
int var_14 = 1467871630;
unsigned int var_15 = 4187027769U;
unsigned int var_16 = 2518784572U;
int var_18 = 2076087399;
int zero = 0;
signed char var_19 = (signed char)-100;
unsigned int var_20 = 3274261963U;
unsigned long long int var_21 = 7637635796158220335ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
