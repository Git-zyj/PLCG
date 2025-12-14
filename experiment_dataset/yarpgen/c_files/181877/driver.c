#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
short var_5 = (short)26655;
unsigned long long int var_6 = 4201235821891919237ULL;
unsigned short var_7 = (unsigned short)8226;
unsigned short var_8 = (unsigned short)32331;
signed char var_9 = (signed char)81;
unsigned short var_11 = (unsigned short)61944;
unsigned long long int var_14 = 2403473218835496378ULL;
unsigned short var_16 = (unsigned short)27102;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-33;
short var_19 = (short)-11539;
short var_20 = (short)-18671;
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
