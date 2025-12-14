#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -475935932;
signed char var_6 = (signed char)36;
signed char var_9 = (signed char)-80;
int var_11 = 396134711;
short var_16 = (short)18207;
short var_17 = (short)-9050;
int zero = 0;
short var_18 = (short)-24388;
unsigned int var_19 = 2723737383U;
signed char var_20 = (signed char)-82;
void init() {
}

void checksum() {
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
