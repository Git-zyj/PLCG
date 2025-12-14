#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned long long int var_1 = 2677770168856517111ULL;
signed char var_3 = (signed char)-5;
unsigned char var_4 = (unsigned char)82;
unsigned char var_7 = (unsigned char)31;
short var_9 = (short)-9803;
unsigned long long int var_10 = 2573767896304761004ULL;
signed char var_12 = (signed char)-31;
unsigned int var_14 = 3087529314U;
signed char var_15 = (signed char)18;
int zero = 0;
signed char var_17 = (signed char)79;
unsigned char var_18 = (unsigned char)199;
_Bool var_19 = (_Bool)0;
int var_20 = -31036134;
short var_21 = (short)-2085;
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
