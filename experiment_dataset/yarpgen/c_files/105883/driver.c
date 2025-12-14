#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 4052701288283803900ULL;
long long int var_7 = -3777886370377792746LL;
int var_9 = -1625107896;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-1862;
unsigned long long int var_13 = 4031387899521976943ULL;
unsigned short var_14 = (unsigned short)5029;
int zero = 0;
unsigned long long int var_15 = 4394492886138858336ULL;
unsigned long long int var_16 = 16997951355252962248ULL;
unsigned short var_17 = (unsigned short)39061;
signed char var_18 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
