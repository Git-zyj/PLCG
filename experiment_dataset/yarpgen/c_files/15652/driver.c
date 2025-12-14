#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16147;
signed char var_7 = (signed char)-118;
signed char var_9 = (signed char)89;
signed char var_12 = (signed char)85;
unsigned short var_16 = (unsigned short)26042;
unsigned short var_17 = (unsigned short)6159;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)44311;
unsigned short var_20 = (unsigned short)10165;
long long int var_21 = 3621081408275505698LL;
void init() {
}

void checksum() {
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
