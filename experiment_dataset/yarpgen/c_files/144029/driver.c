#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21746;
long long int var_2 = -813505283699522542LL;
signed char var_3 = (signed char)-43;
signed char var_4 = (signed char)-26;
unsigned short var_6 = (unsigned short)35846;
long long int var_7 = 1507984599807141424LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)42126;
unsigned char var_10 = (unsigned char)49;
int var_11 = 385250620;
short var_12 = (short)-3195;
long long int var_13 = -3995151727264988142LL;
int zero = 0;
short var_16 = (short)-3640;
int var_17 = -1452952769;
long long int var_18 = -1423219653862091007LL;
short var_19 = (short)-1721;
long long int var_20 = 2662518815504939592LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
