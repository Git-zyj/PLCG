#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5362795172777295766LL;
short var_1 = (short)28564;
unsigned long long int var_2 = 14321029491168408334ULL;
unsigned short var_3 = (unsigned short)5885;
short var_4 = (short)27634;
unsigned short var_6 = (unsigned short)34394;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)45538;
signed char var_15 = (signed char)-91;
int zero = 0;
unsigned long long int var_18 = 6802485080338035698ULL;
long long int var_19 = -7045565049433162880LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
