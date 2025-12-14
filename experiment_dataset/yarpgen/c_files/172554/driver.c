#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1627527383;
short var_2 = (short)-7820;
int var_3 = -1661859175;
unsigned long long int var_5 = 8699903703138336857ULL;
int var_6 = 1101806285;
unsigned long long int var_7 = 11080401796026825345ULL;
unsigned int var_8 = 3518586392U;
unsigned int var_11 = 3360128410U;
short var_14 = (short)-20620;
int var_15 = 322833065;
int zero = 0;
short var_16 = (short)-1417;
unsigned long long int var_17 = 12655335282224958348ULL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-7198;
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
