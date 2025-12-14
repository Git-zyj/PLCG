#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4199542094U;
unsigned int var_4 = 107529988U;
unsigned int var_7 = 3514054626U;
signed char var_9 = (signed char)-63;
unsigned short var_10 = (unsigned short)52220;
unsigned short var_11 = (unsigned short)40496;
int zero = 0;
unsigned long long int var_14 = 10506946015409223184ULL;
unsigned char var_15 = (unsigned char)32;
unsigned long long int var_16 = 12877216138953852148ULL;
long long int var_17 = -4606518583191162526LL;
void init() {
}

void checksum() {
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
