#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 854205788974233379ULL;
long long int var_3 = -661767230319828391LL;
unsigned long long int var_4 = 10518582247294473191ULL;
signed char var_5 = (signed char)85;
short var_6 = (short)-10324;
short var_9 = (short)20438;
int zero = 0;
unsigned long long int var_12 = 9894711068769014989ULL;
unsigned char var_13 = (unsigned char)225;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16027933768758439137ULL;
_Bool var_16 = (_Bool)0;
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
