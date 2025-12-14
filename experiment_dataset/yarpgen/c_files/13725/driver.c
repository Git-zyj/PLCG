#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 189487710U;
unsigned short var_7 = (unsigned short)37618;
unsigned long long int var_8 = 10621839565614361144ULL;
unsigned short var_9 = (unsigned short)8732;
unsigned int var_13 = 1437228653U;
short var_14 = (short)8021;
long long int var_15 = 4427960256284867870LL;
int zero = 0;
long long int var_18 = 7960831219600906681LL;
signed char var_19 = (signed char)-16;
unsigned char var_20 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
