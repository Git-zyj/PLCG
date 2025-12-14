#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned short var_2 = (unsigned short)33743;
long long int var_6 = -7569402361501518333LL;
int var_9 = -2127255672;
int zero = 0;
long long int var_13 = 3062804527956064310LL;
unsigned long long int var_14 = 16539235282895924777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
