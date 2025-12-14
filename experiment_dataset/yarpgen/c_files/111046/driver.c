#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1937593002;
int var_8 = 1611896388;
signed char var_9 = (signed char)-18;
int var_10 = 788225475;
long long int var_11 = -2924469820909521708LL;
unsigned long long int var_13 = 15810474076512274925ULL;
int zero = 0;
signed char var_17 = (signed char)-75;
long long int var_18 = -5337958776033412843LL;
unsigned char var_19 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
