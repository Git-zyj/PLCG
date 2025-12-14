#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6882087154613713070LL;
unsigned short var_3 = (unsigned short)8520;
unsigned char var_4 = (unsigned char)216;
unsigned int var_5 = 1315511255U;
unsigned short var_6 = (unsigned short)57855;
long long int var_8 = -441019421139167911LL;
signed char var_9 = (signed char)41;
int zero = 0;
long long int var_10 = 5488692036515312224LL;
unsigned short var_11 = (unsigned short)12454;
long long int var_12 = -4455704241688388728LL;
long long int var_13 = -5717449048301761387LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
