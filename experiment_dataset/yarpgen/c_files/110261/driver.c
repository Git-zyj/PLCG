#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-19;
signed char var_5 = (signed char)112;
signed char var_6 = (signed char)-11;
unsigned long long int var_9 = 3243421774313915087ULL;
unsigned int var_10 = 295310027U;
unsigned short var_12 = (unsigned short)10482;
int var_14 = -307774225;
unsigned int var_15 = 4165182735U;
signed char var_19 = (signed char)94;
int zero = 0;
int var_20 = -330075609;
unsigned char var_21 = (unsigned char)107;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
