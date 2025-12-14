#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5664790116387467566LL;
unsigned int var_4 = 3405227390U;
long long int var_5 = -5950339265475954265LL;
unsigned int var_8 = 2283849681U;
unsigned char var_9 = (unsigned char)246;
unsigned long long int var_11 = 15749634808467167976ULL;
signed char var_12 = (signed char)84;
unsigned int var_13 = 499347444U;
long long int var_15 = 3843211266952055545LL;
unsigned long long int var_16 = 12227732730727792557ULL;
unsigned short var_17 = (unsigned short)33610;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7684858808967284570LL;
_Bool var_21 = (_Bool)0;
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
