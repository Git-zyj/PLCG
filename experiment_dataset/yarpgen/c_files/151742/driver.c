#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15501696014375666966ULL;
long long int var_3 = -2553958474788513337LL;
long long int var_4 = -2872418732736876552LL;
unsigned short var_5 = (unsigned short)11187;
short var_7 = (short)-14576;
unsigned char var_8 = (unsigned char)193;
int var_9 = -127068570;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)37562;
unsigned long long int var_12 = 14974685261846170444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
