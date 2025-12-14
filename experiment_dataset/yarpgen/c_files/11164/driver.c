#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
signed char var_5 = (signed char)23;
signed char var_7 = (signed char)-67;
signed char var_9 = (signed char)-105;
short var_11 = (short)14633;
int var_12 = 1432205495;
unsigned long long int var_13 = 8578162844962251304ULL;
unsigned short var_14 = (unsigned short)25442;
int zero = 0;
int var_15 = -1964158992;
int var_16 = -1276151311;
signed char var_17 = (signed char)-95;
unsigned long long int var_18 = 7138963157841728438ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
