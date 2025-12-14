#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3688982627U;
signed char var_8 = (signed char)-67;
unsigned int var_14 = 1072234090U;
short var_17 = (short)-21572;
short var_18 = (short)-8592;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-80;
unsigned long long int var_21 = 6111402879371094837ULL;
void init() {
}

void checksum() {
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
