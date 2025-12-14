#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3582;
signed char var_6 = (signed char)49;
unsigned long long int var_7 = 12952103888836402055ULL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-82;
short var_13 = (short)-17268;
unsigned long long int var_16 = 2324910524444995313ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)187;
long long int var_18 = 6308715721598910320LL;
unsigned char var_19 = (unsigned char)20;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
