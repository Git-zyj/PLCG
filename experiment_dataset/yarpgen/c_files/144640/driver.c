#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 268825169U;
short var_8 = (short)6177;
signed char var_13 = (signed char)-74;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 18361855026923245119ULL;
unsigned long long int var_19 = 8190789793976410075ULL;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
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
