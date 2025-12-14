#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1466569197553578876LL;
signed char var_3 = (signed char)-93;
unsigned int var_5 = 1530144839U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 11172871301381714440ULL;
int var_8 = -1297207682;
unsigned short var_10 = (unsigned short)41575;
int zero = 0;
unsigned int var_11 = 687560771U;
unsigned char var_12 = (unsigned char)247;
signed char var_13 = (signed char)-90;
void init() {
}

void checksum() {
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
