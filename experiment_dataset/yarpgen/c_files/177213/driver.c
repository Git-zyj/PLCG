#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38697;
long long int var_5 = 228879289214314082LL;
unsigned long long int var_7 = 14176758406856181719ULL;
unsigned char var_8 = (unsigned char)118;
long long int var_13 = 5321423455717594036LL;
unsigned int var_16 = 3009215320U;
int zero = 0;
unsigned int var_18 = 2501971048U;
unsigned char var_19 = (unsigned char)48;
signed char var_20 = (signed char)7;
unsigned short var_21 = (unsigned short)51581;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
