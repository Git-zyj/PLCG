#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)26573;
int var_3 = -1487494160;
int var_5 = -1855122064;
int var_6 = 107979114;
unsigned char var_7 = (unsigned char)160;
unsigned long long int var_8 = 7068186970873468613ULL;
int var_9 = 505463719;
short var_10 = (short)21429;
unsigned char var_11 = (unsigned char)243;
unsigned short var_12 = (unsigned short)5055;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
unsigned char var_14 = (unsigned char)14;
unsigned long long int var_15 = 16046157850850950087ULL;
void init() {
}

void checksum() {
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
