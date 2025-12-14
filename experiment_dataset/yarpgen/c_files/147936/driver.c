#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
long long int var_3 = 7269810469473924489LL;
signed char var_5 = (signed char)-55;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-82;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4548461604051766578LL;
unsigned short var_19 = (unsigned short)32434;
short var_20 = (short)-31661;
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
