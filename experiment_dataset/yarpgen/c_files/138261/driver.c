#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7944968431849648181LL;
unsigned char var_3 = (unsigned char)180;
long long int var_4 = -1030582018988704762LL;
unsigned int var_6 = 3153115667U;
unsigned long long int var_9 = 591188300470800249ULL;
unsigned int var_10 = 1861369472U;
int zero = 0;
signed char var_15 = (signed char)-65;
short var_16 = (short)18995;
long long int var_17 = 7977926403893342243LL;
void init() {
}

void checksum() {
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
