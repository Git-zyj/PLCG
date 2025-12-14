#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5036894297319756386ULL;
unsigned short var_2 = (unsigned short)13443;
signed char var_3 = (signed char)-96;
int var_4 = 2027308592;
unsigned long long int var_7 = 6185413831428506781ULL;
unsigned long long int var_8 = 5987395811880512302ULL;
unsigned int var_9 = 4001006228U;
unsigned long long int var_10 = 9000906503157028027ULL;
unsigned long long int var_11 = 10211568736624748092ULL;
unsigned char var_12 = (unsigned char)113;
short var_14 = (short)-30528;
unsigned long long int var_16 = 16794307570166180057ULL;
int zero = 0;
unsigned int var_17 = 1768568834U;
unsigned int var_18 = 2177419673U;
long long int var_19 = -8641378526787515077LL;
signed char var_20 = (signed char)-16;
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
