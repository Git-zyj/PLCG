#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 16378741797384463890ULL;
unsigned long long int var_10 = 17048751687245571012ULL;
int var_12 = 1516282877;
int zero = 0;
unsigned long long int var_13 = 11378506857633663368ULL;
short var_14 = (short)-11589;
long long int var_15 = -7474142214672203808LL;
unsigned long long int var_16 = 10399164997185621408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
