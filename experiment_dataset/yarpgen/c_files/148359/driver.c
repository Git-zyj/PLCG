#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)217;
_Bool var_4 = (_Bool)0;
short var_12 = (short)26556;
unsigned int var_14 = 2785392977U;
int zero = 0;
unsigned int var_19 = 2033914562U;
unsigned long long int var_20 = 2844253994446391176ULL;
signed char var_21 = (signed char)-9;
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
