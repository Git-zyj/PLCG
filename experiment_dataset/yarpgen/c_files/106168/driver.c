#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3471762948U;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 3649222904794553582ULL;
unsigned long long int var_18 = 11282512783231053419ULL;
short var_19 = (short)30985;
signed char var_20 = (signed char)-16;
long long int var_21 = 3322553817233534428LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
