#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 716317994;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1134829736715922111ULL;
int var_14 = 1707928110;
short var_16 = (short)-25391;
int zero = 0;
unsigned short var_18 = (unsigned short)7905;
signed char var_19 = (signed char)-38;
int var_20 = -1307777351;
void init() {
}

void checksum() {
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
