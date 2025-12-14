#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8759983068640671271ULL;
signed char var_6 = (signed char)115;
signed char var_7 = (signed char)-94;
int var_11 = 463891422;
unsigned char var_15 = (unsigned char)10;
long long int var_17 = 2117805762340159876LL;
int zero = 0;
signed char var_20 = (signed char)-106;
unsigned long long int var_21 = 4872016332765035458ULL;
unsigned long long int var_22 = 16940622871544248808ULL;
unsigned int var_23 = 1601874804U;
short var_24 = (short)28451;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
