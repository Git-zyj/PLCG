#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8526452787242642593ULL;
signed char var_5 = (signed char)-88;
unsigned char var_6 = (unsigned char)27;
long long int var_7 = -8371442502893024522LL;
signed char var_9 = (signed char)-77;
long long int var_10 = 7390911622822336485LL;
unsigned char var_11 = (unsigned char)215;
int zero = 0;
unsigned int var_13 = 3103622816U;
long long int var_14 = -5906270844222709808LL;
long long int var_15 = 5290189467185405733LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
