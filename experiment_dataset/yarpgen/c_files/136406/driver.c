#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5703925589669259391LL;
unsigned long long int var_4 = 3485366363528842592ULL;
unsigned short var_6 = (unsigned short)49421;
int var_8 = 132589676;
signed char var_9 = (signed char)25;
short var_10 = (short)-5225;
signed char var_13 = (signed char)-67;
unsigned int var_14 = 4085307463U;
unsigned int var_15 = 188744173U;
int var_16 = 554354371;
int zero = 0;
signed char var_17 = (signed char)10;
unsigned short var_18 = (unsigned short)57809;
signed char var_19 = (signed char)-58;
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
