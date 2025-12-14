#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)104;
signed char var_5 = (signed char)-48;
long long int var_10 = -4785899277963627721LL;
long long int var_13 = -1132881470228178010LL;
int zero = 0;
unsigned short var_15 = (unsigned short)45627;
long long int var_16 = -5352551330120067255LL;
signed char var_17 = (signed char)-67;
short var_18 = (short)-2602;
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
