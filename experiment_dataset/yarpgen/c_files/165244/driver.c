#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1871107416;
int var_4 = -671675926;
short var_9 = (short)-10867;
signed char var_15 = (signed char)103;
int zero = 0;
long long int var_17 = 6344201326995220457LL;
signed char var_18 = (signed char)-89;
unsigned long long int var_19 = 4005085689024754918ULL;
signed char var_20 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
