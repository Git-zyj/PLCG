#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29313;
long long int var_1 = 5448638039484936060LL;
_Bool var_3 = (_Bool)0;
int var_4 = 998865817;
int var_6 = -934178949;
signed char var_7 = (signed char)-60;
long long int var_9 = -8518383410643638413LL;
int var_11 = 419343367;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)17900;
unsigned long long int var_15 = 2578196399602518700ULL;
long long int var_16 = 4053074255559288863LL;
int var_17 = 1929180207;
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
