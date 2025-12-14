#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4206328418921515022ULL;
short var_1 = (short)-22501;
unsigned short var_2 = (unsigned short)60327;
short var_4 = (short)-15206;
long long int var_7 = 5547646388340067725LL;
long long int var_9 = -4980666487668481537LL;
unsigned char var_10 = (unsigned char)219;
int var_11 = -389187386;
long long int var_12 = 6880874395219475119LL;
long long int var_13 = -6511097453588197011LL;
short var_14 = (short)-21280;
int zero = 0;
unsigned short var_18 = (unsigned short)44509;
signed char var_19 = (signed char)88;
unsigned char var_20 = (unsigned char)169;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
