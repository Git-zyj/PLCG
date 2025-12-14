#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1675194345;
short var_8 = (short)-31174;
short var_13 = (short)-13188;
long long int var_14 = -7545659090194207631LL;
signed char var_16 = (signed char)-69;
short var_17 = (short)-3955;
signed char var_18 = (signed char)-98;
int zero = 0;
int var_19 = 531047899;
unsigned long long int var_20 = 9810056289449073722ULL;
short var_21 = (short)9161;
unsigned char var_22 = (unsigned char)127;
short var_23 = (short)-15964;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
