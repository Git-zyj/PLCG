#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3509269691101514623LL;
signed char var_8 = (signed char)96;
short var_10 = (short)11592;
long long int var_12 = 9057844484213851529LL;
int zero = 0;
short var_19 = (short)-11502;
unsigned long long int var_20 = 14373039212757716168ULL;
short var_21 = (short)-29149;
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
