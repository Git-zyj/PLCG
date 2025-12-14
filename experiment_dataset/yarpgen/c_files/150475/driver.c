#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3412093794U;
int var_3 = 224957222;
unsigned long long int var_6 = 15857442862642280092ULL;
int var_8 = -1481857350;
int var_9 = 370954011;
unsigned long long int var_12 = 742362331401427620ULL;
signed char var_13 = (signed char)80;
int zero = 0;
unsigned long long int var_14 = 15358071218900461812ULL;
unsigned int var_15 = 2731509355U;
signed char var_16 = (signed char)52;
int var_17 = -1403366120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
