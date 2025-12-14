#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5900184313771316994ULL;
unsigned long long int var_2 = 2176683240696914367ULL;
unsigned long long int var_3 = 11080894511661214970ULL;
long long int var_4 = 3112907701306567955LL;
unsigned long long int var_5 = 616119606411841805ULL;
unsigned long long int var_13 = 3309033621993299688ULL;
short var_14 = (short)-25031;
long long int var_16 = 7142776235446919190LL;
unsigned long long int var_18 = 2039234650455292811ULL;
int zero = 0;
unsigned long long int var_19 = 17751623692749801359ULL;
unsigned long long int var_20 = 11991574174801974063ULL;
long long int var_21 = 7465686018194358676LL;
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
