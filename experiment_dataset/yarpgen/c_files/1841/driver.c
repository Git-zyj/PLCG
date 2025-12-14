#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17039278859619356129ULL;
unsigned long long int var_1 = 9393512574264599726ULL;
long long int var_9 = -8541956272829713199LL;
unsigned short var_11 = (unsigned short)39824;
unsigned char var_13 = (unsigned char)110;
unsigned int var_14 = 897577279U;
int zero = 0;
unsigned int var_15 = 2888169620U;
unsigned char var_16 = (unsigned char)14;
long long int var_17 = 543613247501015482LL;
unsigned short var_18 = (unsigned short)6707;
void init() {
}

void checksum() {
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
