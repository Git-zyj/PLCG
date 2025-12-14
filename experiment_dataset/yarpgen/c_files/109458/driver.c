#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 9031897640895217885LL;
long long int var_7 = -9158898370440624696LL;
unsigned short var_9 = (unsigned short)65365;
int zero = 0;
short var_11 = (short)6003;
unsigned short var_12 = (unsigned short)60765;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
