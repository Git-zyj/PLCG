#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1223;
unsigned short var_3 = (unsigned short)5370;
int var_6 = 244733456;
int var_13 = -1003886270;
int zero = 0;
long long int var_18 = 2068730585906778410LL;
unsigned short var_19 = (unsigned short)63959;
unsigned long long int var_20 = 13975731374310821084ULL;
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
