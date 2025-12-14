#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2987701878U;
unsigned long long int var_1 = 12558846472498194133ULL;
signed char var_3 = (signed char)35;
short var_4 = (short)-1424;
unsigned long long int var_5 = 17327780036399068352ULL;
long long int var_6 = -1922991272609444884LL;
unsigned short var_8 = (unsigned short)59754;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -682458464889227180LL;
unsigned long long int var_12 = 17871924816233946613ULL;
long long int var_13 = -7962993614695053435LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
