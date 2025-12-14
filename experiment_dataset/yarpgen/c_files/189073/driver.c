#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)13800;
unsigned int var_6 = 1072355475U;
unsigned long long int var_7 = 17049592487197181141ULL;
long long int var_8 = 3040425549856090588LL;
int var_11 = 1834150126;
signed char var_12 = (signed char)-79;
int var_13 = -1230574577;
int var_14 = 1842577645;
int zero = 0;
unsigned char var_17 = (unsigned char)90;
long long int var_18 = 1027615031306254797LL;
signed char var_19 = (signed char)-13;
void init() {
}

void checksum() {
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
