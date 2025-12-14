#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6100597406530414516LL;
int var_2 = -1713580233;
short var_7 = (short)-3392;
unsigned int var_8 = 1120320291U;
signed char var_9 = (signed char)-122;
unsigned int var_12 = 905960334U;
short var_13 = (short)10194;
int zero = 0;
short var_15 = (short)-22743;
long long int var_16 = -6013919852677798195LL;
long long int var_17 = 7756948998726752446LL;
unsigned char var_18 = (unsigned char)229;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
