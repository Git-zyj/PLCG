#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1324219572U;
int var_1 = -832592219;
unsigned char var_2 = (unsigned char)65;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 13222577748757135504ULL;
short var_6 = (short)26966;
int var_8 = 193985765;
unsigned int var_9 = 2957429170U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)17344;
int var_13 = 1399835339;
long long int var_14 = 2711326505922296683LL;
unsigned int var_15 = 2131615209U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
