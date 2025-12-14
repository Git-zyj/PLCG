#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3521379145U;
long long int var_1 = 8894849915119647156LL;
unsigned short var_3 = (unsigned short)58933;
unsigned short var_6 = (unsigned short)45091;
unsigned int var_7 = 750874748U;
signed char var_12 = (signed char)-39;
int zero = 0;
unsigned short var_13 = (unsigned short)25137;
long long int var_14 = -2557309493118250233LL;
signed char var_15 = (signed char)27;
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
