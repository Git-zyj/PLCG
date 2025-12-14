#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25612;
short var_3 = (short)-20043;
long long int var_4 = 5294699871370132360LL;
unsigned char var_10 = (unsigned char)212;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)15901;
int zero = 0;
unsigned long long int var_18 = 5809363250037656906ULL;
unsigned long long int var_19 = 12108142627401901712ULL;
short var_20 = (short)-29201;
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
