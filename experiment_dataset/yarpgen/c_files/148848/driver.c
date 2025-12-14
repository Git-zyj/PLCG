#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3978;
long long int var_2 = 596209994526003851LL;
long long int var_3 = 3792145842403648265LL;
unsigned short var_5 = (unsigned short)29166;
unsigned int var_6 = 2925640586U;
int var_7 = -1417203641;
short var_8 = (short)22887;
unsigned short var_9 = (unsigned short)51465;
long long int var_10 = 6337291094409457119LL;
signed char var_11 = (signed char)-69;
signed char var_14 = (signed char)85;
unsigned short var_15 = (unsigned short)45219;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2372436188582580226LL;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
short var_21 = (short)12950;
_Bool var_22 = (_Bool)1;
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
