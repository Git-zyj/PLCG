#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned char var_1 = (unsigned char)86;
unsigned short var_2 = (unsigned short)62233;
short var_3 = (short)-14174;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-57;
short var_7 = (short)-25086;
int var_8 = 498173741;
int var_9 = -2067459770;
unsigned short var_10 = (unsigned short)45602;
unsigned int var_11 = 927326706U;
int zero = 0;
unsigned int var_12 = 2501642808U;
unsigned int var_13 = 4291326905U;
unsigned char var_14 = (unsigned char)165;
unsigned int var_15 = 1521622130U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
