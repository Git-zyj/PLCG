#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-380;
signed char var_4 = (signed char)-88;
signed char var_5 = (signed char)110;
_Bool var_10 = (_Bool)1;
signed char var_15 = (signed char)-52;
unsigned short var_16 = (unsigned short)54559;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11302728515518760386ULL;
unsigned long long int var_19 = 12402117172264265000ULL;
void init() {
}

void checksum() {
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
