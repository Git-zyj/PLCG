#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54242;
long long int var_2 = 2534257765508462579LL;
unsigned short var_4 = (unsigned short)63957;
unsigned short var_5 = (unsigned short)50141;
unsigned short var_6 = (unsigned short)63383;
signed char var_9 = (signed char)-54;
signed char var_12 = (signed char)97;
int zero = 0;
unsigned short var_13 = (unsigned short)20989;
long long int var_14 = -908583964907243002LL;
long long int var_15 = 4702938704504855481LL;
long long int var_16 = 3083570274477269128LL;
signed char var_17 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
