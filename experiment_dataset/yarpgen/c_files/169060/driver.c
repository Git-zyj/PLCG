#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned long long int var_1 = 15658768316306772754ULL;
short var_3 = (short)6431;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 419432320962412667ULL;
signed char var_8 = (signed char)79;
unsigned short var_9 = (unsigned short)27924;
int var_10 = 332652951;
int zero = 0;
short var_18 = (short)-31665;
signed char var_19 = (signed char)-71;
signed char var_20 = (signed char)5;
unsigned char var_21 = (unsigned char)202;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
