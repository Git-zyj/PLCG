#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)154;
unsigned long long int var_4 = 683975627044691119ULL;
unsigned char var_6 = (unsigned char)172;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 12777439901627223350ULL;
unsigned int var_12 = 3396138709U;
int var_14 = 595579887;
int var_15 = -1730934;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)24;
int var_21 = 1271406473;
signed char var_22 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
