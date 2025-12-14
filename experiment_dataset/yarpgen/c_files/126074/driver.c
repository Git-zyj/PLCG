#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3482514400434240715ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-31079;
unsigned char var_5 = (unsigned char)97;
int var_7 = 1682754221;
short var_8 = (short)28280;
short var_9 = (short)18010;
signed char var_10 = (signed char)-86;
unsigned long long int var_13 = 12536919131269281592ULL;
unsigned short var_14 = (unsigned short)40597;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1406548777U;
unsigned long long int var_17 = 6779122588369064394ULL;
int var_18 = 1378183637;
unsigned char var_19 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
