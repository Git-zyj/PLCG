#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3828500897524348522ULL;
unsigned char var_1 = (unsigned char)142;
unsigned char var_2 = (unsigned char)33;
unsigned short var_3 = (unsigned short)40011;
unsigned short var_4 = (unsigned short)15699;
unsigned char var_5 = (unsigned char)200;
int var_7 = 339148822;
signed char var_8 = (signed char)-125;
int var_9 = -1326627453;
unsigned short var_10 = (unsigned short)60965;
unsigned long long int var_11 = 2512630073620355561ULL;
int var_12 = 79988180;
unsigned char var_13 = (unsigned char)98;
unsigned long long int var_14 = 4622490423943406664ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)752;
unsigned int var_16 = 1263690428U;
int var_17 = -1917805614;
unsigned short var_18 = (unsigned short)13868;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
