#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-115;
unsigned int var_4 = 2070740316U;
unsigned short var_5 = (unsigned short)31780;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)18;
unsigned long long int var_10 = 7714928716979153539ULL;
int zero = 0;
int var_13 = -1068191349;
unsigned long long int var_14 = 5533496561683051477ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 7482066844804834957LL;
unsigned long long int var_17 = 5112817777912193224ULL;
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
