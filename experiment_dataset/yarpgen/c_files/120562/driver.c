#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-2;
unsigned short var_9 = (unsigned short)14347;
short var_13 = (short)3623;
int zero = 0;
int var_20 = 819996629;
signed char var_21 = (signed char)-21;
long long int var_22 = -7451072194695448942LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
