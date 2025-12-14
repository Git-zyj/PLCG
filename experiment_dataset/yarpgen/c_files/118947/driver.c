#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5285424573830489874ULL;
short var_2 = (short)7278;
short var_4 = (short)-23681;
unsigned long long int var_7 = 17460608821793719121ULL;
int var_9 = 1414478315;
int zero = 0;
int var_10 = 1861828207;
unsigned int var_11 = 4241115691U;
unsigned long long int var_12 = 7655050565015578442ULL;
signed char var_13 = (signed char)-17;
short var_14 = (short)-13451;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
