#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 508489469U;
long long int var_2 = -4050383104315129951LL;
unsigned char var_4 = (unsigned char)53;
unsigned long long int var_5 = 15941644152715204966ULL;
unsigned char var_7 = (unsigned char)116;
short var_10 = (short)-22964;
int zero = 0;
unsigned char var_12 = (unsigned char)225;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3738663356U;
int var_15 = -242902964;
unsigned char var_16 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
