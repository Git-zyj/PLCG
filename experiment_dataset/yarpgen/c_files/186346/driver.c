#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 681503115;
int var_1 = 26138266;
unsigned short var_3 = (unsigned short)39674;
long long int var_6 = 1105450429740966811LL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)12039;
unsigned long long int var_11 = 3412181799823466468ULL;
signed char var_12 = (signed char)85;
unsigned short var_13 = (unsigned short)46373;
short var_18 = (short)-31863;
int var_19 = 1578080198;
int zero = 0;
int var_20 = -1108994284;
unsigned char var_21 = (unsigned char)195;
unsigned char var_22 = (unsigned char)226;
short var_23 = (short)-5837;
void init() {
}

void checksum() {
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
