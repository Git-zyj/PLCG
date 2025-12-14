#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27954;
short var_3 = (short)-17391;
unsigned int var_5 = 1789278166U;
signed char var_7 = (signed char)-11;
int var_8 = -593732986;
unsigned long long int var_9 = 6243028366204383014ULL;
unsigned int var_10 = 2580099229U;
long long int var_11 = -7443000535704791603LL;
int zero = 0;
unsigned long long int var_12 = 3260120112397841765ULL;
unsigned long long int var_13 = 11206784115897058514ULL;
int var_14 = -1508728958;
void init() {
}

void checksum() {
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
