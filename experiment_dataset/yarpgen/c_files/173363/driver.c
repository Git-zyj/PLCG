#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2023067119;
unsigned char var_2 = (unsigned char)220;
unsigned short var_6 = (unsigned short)9743;
long long int var_9 = 9130162586061578551LL;
signed char var_10 = (signed char)104;
unsigned short var_12 = (unsigned short)39721;
unsigned long long int var_16 = 12701534917417854192ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -8493464128338417742LL;
unsigned short var_21 = (unsigned short)28131;
long long int var_22 = -2201252317239818416LL;
signed char var_23 = (signed char)-38;
signed char var_24 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
