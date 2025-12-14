#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
unsigned long long int var_5 = 20302316175915287ULL;
_Bool var_13 = (_Bool)1;
int var_15 = 733311976;
short var_16 = (short)6163;
int zero = 0;
unsigned long long int var_17 = 10147565001673364827ULL;
signed char var_18 = (signed char)-115;
signed char var_19 = (signed char)-124;
unsigned short var_20 = (unsigned short)47316;
unsigned short var_21 = (unsigned short)36261;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
