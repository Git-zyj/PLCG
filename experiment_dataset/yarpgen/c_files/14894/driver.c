#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2541329596U;
unsigned int var_3 = 1134911521U;
unsigned short var_13 = (unsigned short)11914;
short var_14 = (short)25193;
long long int var_15 = -5316993352193433506LL;
int zero = 0;
int var_16 = -1887587631;
short var_17 = (short)-31486;
long long int var_18 = 567521463362241527LL;
int var_19 = -1274423203;
signed char var_20 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
