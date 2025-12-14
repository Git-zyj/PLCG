#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56056;
signed char var_1 = (signed char)100;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2802917412696971062ULL;
int var_7 = 1399293689;
unsigned char var_9 = (unsigned char)51;
int zero = 0;
unsigned char var_12 = (unsigned char)238;
signed char var_13 = (signed char)-29;
unsigned short var_14 = (unsigned short)56388;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
