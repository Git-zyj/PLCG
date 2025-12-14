#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)236;
unsigned int var_7 = 3743097572U;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_13 = -1388158326;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)58;
int zero = 0;
short var_19 = (short)-8277;
int var_20 = -32401177;
unsigned long long int var_21 = 630274960641718459ULL;
void init() {
}

void checksum() {
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
