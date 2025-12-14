#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41532;
unsigned short var_7 = (unsigned short)61829;
short var_8 = (short)-1172;
unsigned int var_11 = 652155869U;
long long int var_12 = 1781534793328367835LL;
unsigned short var_14 = (unsigned short)47906;
short var_19 = (short)-6140;
int zero = 0;
unsigned long long int var_20 = 14273963744380097426ULL;
unsigned long long int var_21 = 3330158541835778909ULL;
void init() {
}

void checksum() {
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
