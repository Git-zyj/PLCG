#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41223;
unsigned int var_2 = 2311487303U;
unsigned short var_3 = (unsigned short)28950;
int var_4 = 1834558059;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)57495;
short var_7 = (short)-5447;
int var_8 = 91824087;
unsigned char var_9 = (unsigned char)142;
unsigned long long int var_10 = 10903690809382728473ULL;
short var_11 = (short)-8631;
unsigned int var_13 = 715593542U;
int var_14 = 271261589;
short var_15 = (short)12891;
int zero = 0;
short var_17 = (short)13455;
unsigned short var_18 = (unsigned short)18159;
unsigned int var_19 = 2345561916U;
unsigned long long int var_20 = 13219017810669351515ULL;
short var_21 = (short)-16551;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
