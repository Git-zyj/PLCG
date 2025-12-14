#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13294;
unsigned int var_2 = 3837415276U;
long long int var_3 = -3600004037780213632LL;
unsigned int var_4 = 1917768563U;
signed char var_5 = (signed char)-10;
unsigned char var_6 = (unsigned char)18;
unsigned char var_9 = (unsigned char)116;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 825209408U;
long long int var_15 = 2784291559937624678LL;
signed char var_16 = (signed char)87;
int zero = 0;
unsigned long long int var_17 = 7066077182101345462ULL;
short var_18 = (short)-5078;
unsigned char var_19 = (unsigned char)82;
void init() {
}

void checksum() {
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
