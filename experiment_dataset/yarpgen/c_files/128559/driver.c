#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14286;
unsigned long long int var_2 = 7613273471051516989ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-15662;
signed char var_8 = (signed char)-20;
unsigned long long int var_12 = 6951970597993918152ULL;
long long int var_13 = -4603184960606552457LL;
int zero = 0;
signed char var_14 = (signed char)125;
unsigned long long int var_15 = 6240940188127435657ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
