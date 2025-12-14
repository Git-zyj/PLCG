#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4311440006596001692LL;
int var_4 = -293864631;
_Bool var_5 = (_Bool)0;
long long int var_7 = -7782624468775858066LL;
signed char var_8 = (signed char)-89;
short var_9 = (short)-8774;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 16535161568808960151ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -1696989756;
unsigned short var_18 = (unsigned short)26571;
long long int var_19 = -1851039767972057883LL;
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
