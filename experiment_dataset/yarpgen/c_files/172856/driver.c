#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -481184537;
short var_3 = (short)-19726;
int var_6 = -875852874;
short var_8 = (short)13267;
unsigned int var_9 = 2561598440U;
unsigned long long int var_12 = 853443864428010806ULL;
unsigned char var_13 = (unsigned char)123;
int zero = 0;
unsigned char var_17 = (unsigned char)214;
int var_18 = 789308672;
long long int var_19 = 5500220924702376291LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
