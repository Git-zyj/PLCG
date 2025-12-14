#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2117378770;
short var_4 = (short)22355;
long long int var_5 = -1183229871987169859LL;
unsigned char var_7 = (unsigned char)198;
long long int var_8 = 8613534160368262109LL;
long long int var_11 = -5964880185582680921LL;
int var_12 = -1539630467;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)59594;
unsigned long long int var_19 = 1747420683224227768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
