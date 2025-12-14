#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2634421240U;
unsigned long long int var_3 = 18019192375344246231ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 211845093U;
unsigned char var_6 = (unsigned char)238;
unsigned char var_7 = (unsigned char)214;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)124;
long long int var_10 = 5171200466433778530LL;
unsigned short var_12 = (unsigned short)51213;
unsigned int var_13 = 281081679U;
unsigned int var_15 = 1982679753U;
int var_16 = 1596928163;
signed char var_17 = (signed char)124;
unsigned int var_18 = 3739746430U;
int zero = 0;
signed char var_19 = (signed char)111;
unsigned long long int var_20 = 5876193056252921825ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-103;
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
