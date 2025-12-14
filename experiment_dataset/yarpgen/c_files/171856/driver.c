#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)24;
long long int var_5 = 1935656487637740938LL;
unsigned short var_8 = (unsigned short)27017;
int var_10 = 181146199;
unsigned char var_14 = (unsigned char)210;
short var_15 = (short)-1389;
signed char var_17 = (signed char)-2;
int zero = 0;
unsigned short var_19 = (unsigned short)20084;
short var_20 = (short)-10471;
signed char var_21 = (signed char)23;
unsigned int var_22 = 699304293U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
