#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-1;
unsigned char var_4 = (unsigned char)28;
signed char var_5 = (signed char)-54;
short var_6 = (short)11866;
signed char var_9 = (signed char)-12;
int zero = 0;
unsigned long long int var_11 = 2674173171150988067ULL;
signed char var_12 = (signed char)-17;
short var_13 = (short)-1670;
long long int var_14 = -8925027060245142062LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
