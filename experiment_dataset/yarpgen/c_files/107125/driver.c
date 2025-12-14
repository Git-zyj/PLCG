#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
long long int var_2 = -5305490812464043004LL;
short var_3 = (short)-23664;
short var_4 = (short)-20511;
short var_5 = (short)21323;
long long int var_6 = -6306250532087293721LL;
signed char var_7 = (signed char)8;
long long int var_9 = -7199840668794809879LL;
signed char var_11 = (signed char)-24;
short var_12 = (short)23925;
int zero = 0;
signed char var_17 = (signed char)11;
int var_18 = 1057760352;
void init() {
}

void checksum() {
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
