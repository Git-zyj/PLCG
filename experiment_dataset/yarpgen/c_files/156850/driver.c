#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1275433947U;
signed char var_2 = (signed char)6;
unsigned short var_3 = (unsigned short)25044;
unsigned char var_7 = (unsigned char)167;
unsigned short var_9 = (unsigned short)7452;
int var_10 = 1990010947;
unsigned int var_11 = 444624025U;
unsigned int var_13 = 863084656U;
long long int var_14 = 4576024112980780430LL;
int zero = 0;
unsigned long long int var_17 = 1328439117574904828ULL;
signed char var_18 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
