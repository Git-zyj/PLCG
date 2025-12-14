#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4766524567402865237LL;
signed char var_5 = (signed char)30;
unsigned long long int var_10 = 4721885178051677375ULL;
int var_15 = -1015678280;
long long int var_17 = -6572971710825289047LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-17295;
int var_21 = 346948852;
void init() {
}

void checksum() {
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
