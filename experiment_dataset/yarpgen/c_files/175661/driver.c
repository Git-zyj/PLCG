#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5391;
unsigned short var_1 = (unsigned short)40635;
unsigned char var_4 = (unsigned char)237;
long long int var_5 = -889080380588508714LL;
int var_6 = -1702385873;
short var_7 = (short)-26195;
unsigned int var_8 = 3052392896U;
long long int var_9 = 2092915240582268681LL;
unsigned long long int var_10 = 8215833521953345405ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-89;
short var_16 = (short)-22094;
long long int var_17 = 7861142805790375578LL;
long long int var_18 = 3959545259344357965LL;
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
