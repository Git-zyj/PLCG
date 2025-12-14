#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
signed char var_1 = (signed char)-79;
unsigned long long int var_2 = 16410983733567040440ULL;
unsigned int var_3 = 1483225599U;
unsigned int var_5 = 1154011586U;
signed char var_6 = (signed char)42;
unsigned long long int var_7 = 8497283047633443628ULL;
unsigned long long int var_9 = 6078981686503508637ULL;
int zero = 0;
signed char var_10 = (signed char)-119;
unsigned int var_11 = 2800448192U;
signed char var_12 = (signed char)25;
unsigned int var_13 = 2382439451U;
signed char var_14 = (signed char)-95;
signed char var_15 = (signed char)42;
unsigned long long int var_16 = 3536603536663501913ULL;
unsigned int var_17 = 4291204305U;
unsigned int var_18 = 4220320962U;
unsigned int var_19 = 718578428U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
