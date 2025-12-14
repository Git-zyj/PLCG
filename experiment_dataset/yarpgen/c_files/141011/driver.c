#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15361621759478844190ULL;
unsigned char var_4 = (unsigned char)230;
unsigned short var_6 = (unsigned short)64764;
unsigned int var_8 = 315377888U;
unsigned long long int var_9 = 9239056984343805968ULL;
unsigned short var_10 = (unsigned short)49708;
short var_12 = (short)-19337;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
long long int var_15 = 6512871064416607187LL;
long long int var_16 = 611947206147216945LL;
unsigned long long int var_17 = 2794059090104393187ULL;
unsigned char var_18 = (unsigned char)216;
unsigned int var_19 = 1253870040U;
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
