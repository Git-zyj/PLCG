#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26207;
long long int var_4 = -6195276319968164923LL;
short var_6 = (short)-19714;
signed char var_9 = (signed char)-31;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)38671;
unsigned short var_12 = (unsigned short)5494;
unsigned int var_18 = 1476236705U;
int zero = 0;
unsigned char var_20 = (unsigned char)218;
unsigned int var_21 = 1763758357U;
long long int var_22 = -1897068345785754850LL;
signed char var_23 = (signed char)122;
unsigned int var_24 = 1664951293U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
