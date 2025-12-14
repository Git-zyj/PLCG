#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8182;
long long int var_2 = 7078135526248308137LL;
unsigned short var_3 = (unsigned short)31142;
unsigned int var_4 = 2719752964U;
unsigned int var_5 = 830597490U;
unsigned int var_6 = 286121948U;
int var_7 = -1086528383;
long long int var_9 = -3690270676250605809LL;
int var_10 = 1691451952;
int zero = 0;
int var_11 = 1199602907;
long long int var_12 = -7558113277778977107LL;
unsigned int var_13 = 1597782782U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)2765;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
