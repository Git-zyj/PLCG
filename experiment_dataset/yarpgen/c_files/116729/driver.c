#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)82;
signed char var_7 = (signed char)46;
int var_9 = 1780388456;
signed char var_11 = (signed char)48;
unsigned short var_12 = (unsigned short)20999;
int zero = 0;
signed char var_17 = (signed char)61;
_Bool var_18 = (_Bool)1;
long long int var_19 = 428134006246741168LL;
unsigned int var_20 = 1140085375U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
