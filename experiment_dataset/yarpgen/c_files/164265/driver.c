#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8800909419344178739LL;
long long int var_6 = 1531947810477785705LL;
long long int var_8 = -983090889170358638LL;
unsigned int var_10 = 3062055005U;
long long int var_12 = 9120998249118339778LL;
int zero = 0;
long long int var_14 = -3545437593689916324LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
