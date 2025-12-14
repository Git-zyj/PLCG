#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned int var_1 = 3841624563U;
long long int var_2 = -949765341359609204LL;
long long int var_6 = -1480090203795042771LL;
int var_7 = -1301508908;
unsigned int var_8 = 3201517067U;
int var_9 = -1908782325;
int var_10 = 772655531;
int zero = 0;
long long int var_12 = 121902789898273421LL;
long long int var_13 = 640380710691513312LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
