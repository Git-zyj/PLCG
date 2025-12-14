#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 542757692;
unsigned short var_1 = (unsigned short)7110;
unsigned char var_3 = (unsigned char)21;
int var_4 = 445465728;
unsigned short var_5 = (unsigned short)8154;
int var_8 = -1467387267;
unsigned short var_9 = (unsigned short)56266;
unsigned short var_10 = (unsigned short)6747;
int var_11 = 1081531985;
int zero = 0;
int var_14 = 1762265006;
unsigned short var_15 = (unsigned short)52486;
_Bool var_16 = (_Bool)1;
int var_17 = -1886397669;
unsigned char var_18 = (unsigned char)165;
void init() {
}

void checksum() {
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
