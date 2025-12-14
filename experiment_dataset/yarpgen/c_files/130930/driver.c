#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5361711449974599429ULL;
_Bool var_3 = (_Bool)0;
short var_7 = (short)-15901;
long long int var_8 = -6376286887480639385LL;
int var_10 = -1706654921;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -924077501948406628LL;
unsigned long long int var_17 = 5698956374981113805ULL;
void init() {
}

void checksum() {
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
