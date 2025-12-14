#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)33;
long long int var_3 = -5036860751670096904LL;
unsigned short var_7 = (unsigned short)38044;
unsigned long long int var_11 = 5233472232195197528ULL;
int zero = 0;
unsigned long long int var_13 = 7779003055307104029ULL;
unsigned int var_14 = 2698447505U;
unsigned long long int var_15 = 6142425485575189978ULL;
unsigned char var_16 = (unsigned char)59;
unsigned short var_17 = (unsigned short)26256;
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
