#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 517577215;
int var_3 = 1597792918;
_Bool var_9 = (_Bool)0;
long long int var_12 = 7263728091923040455LL;
unsigned int var_13 = 223934916U;
signed char var_14 = (signed char)-117;
int zero = 0;
int var_15 = -371548926;
unsigned char var_16 = (unsigned char)88;
long long int var_17 = -6342263924929832611LL;
long long int var_18 = -6247842217750965228LL;
unsigned int var_19 = 2575796550U;
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
