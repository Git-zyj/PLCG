#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3769728475U;
signed char var_1 = (signed char)37;
unsigned long long int var_2 = 9492369497907575457ULL;
unsigned long long int var_5 = 15835173672522337246ULL;
short var_7 = (short)-18613;
signed char var_8 = (signed char)89;
unsigned char var_9 = (unsigned char)116;
int var_10 = -998164556;
unsigned short var_11 = (unsigned short)58022;
int zero = 0;
short var_16 = (short)-29905;
unsigned long long int var_17 = 15701894479139037838ULL;
signed char var_18 = (signed char)32;
long long int var_19 = -5482885897540846520LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
