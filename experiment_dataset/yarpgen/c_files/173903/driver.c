#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27457;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)25;
unsigned long long int var_5 = 6447371373555380873ULL;
unsigned long long int var_6 = 11261422237182482019ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-125;
int var_10 = -825142576;
unsigned int var_12 = 542182500U;
int zero = 0;
unsigned long long int var_13 = 16855909124665625335ULL;
unsigned int var_14 = 2008374515U;
unsigned int var_15 = 2999861228U;
int var_16 = -1710108474;
void init() {
}

void checksum() {
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
