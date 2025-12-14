#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18075;
signed char var_2 = (signed char)-28;
unsigned char var_3 = (unsigned char)9;
short var_5 = (short)-14176;
short var_8 = (short)17225;
int var_9 = -1473364177;
signed char var_12 = (signed char)-125;
short var_13 = (short)22667;
int zero = 0;
unsigned long long int var_14 = 12647332609352901978ULL;
unsigned long long int var_15 = 9540259493685928021ULL;
signed char var_16 = (signed char)-104;
unsigned char var_17 = (unsigned char)28;
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
