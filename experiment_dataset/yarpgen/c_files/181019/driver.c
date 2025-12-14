#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)163;
int var_3 = -307051482;
unsigned int var_5 = 2302228854U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)64972;
short var_12 = (short)27454;
unsigned long long int var_13 = 7161947188769192676ULL;
short var_16 = (short)-24210;
int zero = 0;
int var_19 = 854059161;
signed char var_20 = (signed char)68;
unsigned short var_21 = (unsigned short)38777;
int var_22 = -13818191;
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
