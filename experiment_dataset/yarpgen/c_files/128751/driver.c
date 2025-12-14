#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5323023659720610318ULL;
int var_5 = 560491555;
long long int var_6 = 8547626919249672263LL;
int var_8 = -1463545915;
unsigned char var_11 = (unsigned char)141;
unsigned long long int var_12 = 9676986429574852887ULL;
unsigned short var_15 = (unsigned short)45904;
int zero = 0;
unsigned short var_16 = (unsigned short)17965;
_Bool var_17 = (_Bool)0;
int var_18 = 1397653149;
unsigned long long int var_19 = 1348382239753258004ULL;
unsigned long long int var_20 = 7161622824741733605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
