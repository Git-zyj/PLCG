#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -1878931898226463151LL;
int var_3 = 1897056743;
int var_4 = 1172167920;
int var_5 = 1560083838;
unsigned short var_6 = (unsigned short)35185;
unsigned int var_7 = 323807207U;
unsigned char var_8 = (unsigned char)194;
long long int var_9 = 8082212461359059965LL;
unsigned long long int var_12 = 14318414987019242748ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 1103357186;
unsigned short var_17 = (unsigned short)33350;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14369136120215902997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
