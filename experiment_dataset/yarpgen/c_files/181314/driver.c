#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8981605932681345910LL;
int var_3 = 164945067;
unsigned int var_5 = 1926267767U;
int var_7 = 820133045;
unsigned int var_8 = 1185454148U;
unsigned long long int var_9 = 16423880781933944400ULL;
int var_11 = 1979979522;
unsigned long long int var_13 = 1546211912688229480ULL;
long long int var_14 = -1041309215147003270LL;
short var_16 = (short)2622;
int zero = 0;
unsigned short var_17 = (unsigned short)54793;
int var_18 = 1880473494;
unsigned int var_19 = 1352741034U;
unsigned char var_20 = (unsigned char)150;
_Bool var_21 = (_Bool)0;
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
