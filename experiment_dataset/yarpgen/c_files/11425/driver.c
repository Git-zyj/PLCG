#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1780489373829463335ULL;
int var_5 = -734463010;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-11;
int var_9 = -1816720619;
int var_11 = -1508364572;
int zero = 0;
signed char var_12 = (signed char)-112;
unsigned long long int var_13 = 7538198834422988282ULL;
void init() {
}

void checksum() {
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
