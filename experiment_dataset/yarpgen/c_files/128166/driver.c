#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7594602974441231851LL;
unsigned short var_1 = (unsigned short)14933;
unsigned short var_3 = (unsigned short)32007;
int var_4 = 2018828293;
unsigned short var_5 = (unsigned short)19167;
unsigned char var_6 = (unsigned char)252;
unsigned short var_7 = (unsigned short)19592;
unsigned long long int var_8 = 690715736141964112ULL;
unsigned char var_9 = (unsigned char)241;
int var_10 = 1095401734;
short var_11 = (short)14752;
int zero = 0;
int var_12 = -1230319470;
unsigned long long int var_13 = 3402743748992166408ULL;
short var_14 = (short)19506;
int var_15 = -197604741;
short var_16 = (short)20376;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
