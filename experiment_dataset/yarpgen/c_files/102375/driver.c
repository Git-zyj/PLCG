#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6422457674659241805ULL;
unsigned int var_1 = 1646897482U;
unsigned char var_4 = (unsigned char)138;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3771059883655286981LL;
unsigned long long int var_10 = 4746809277573805567ULL;
long long int var_11 = 2702368153301506104LL;
int zero = 0;
unsigned int var_13 = 332049703U;
unsigned int var_14 = 295107972U;
short var_15 = (short)31113;
unsigned char var_16 = (unsigned char)55;
int var_17 = 1185180341;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
