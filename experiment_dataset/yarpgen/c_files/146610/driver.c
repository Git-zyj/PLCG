#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33972;
int var_1 = 702881457;
unsigned char var_7 = (unsigned char)237;
signed char var_8 = (signed char)82;
long long int var_9 = -833331280803052393LL;
long long int var_11 = 9115572301755098012LL;
signed char var_12 = (signed char)28;
int var_14 = -12307598;
long long int var_15 = 4386153753061607952LL;
int zero = 0;
signed char var_19 = (signed char)-14;
unsigned char var_20 = (unsigned char)136;
void init() {
}

void checksum() {
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
