#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 932031468;
signed char var_8 = (signed char)-85;
signed char var_10 = (signed char)-10;
unsigned short var_12 = (unsigned short)61879;
signed char var_13 = (signed char)-22;
signed char var_15 = (signed char)30;
unsigned short var_16 = (unsigned short)3995;
long long int var_18 = -4038450280867528405LL;
int zero = 0;
unsigned short var_20 = (unsigned short)18507;
signed char var_21 = (signed char)65;
int var_22 = 2020853410;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)115;
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
