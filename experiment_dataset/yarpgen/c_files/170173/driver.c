#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
unsigned long long int var_1 = 13061502423361792174ULL;
unsigned long long int var_2 = 7216706403877605178ULL;
_Bool var_4 = (_Bool)1;
long long int var_7 = 6788265138008649740LL;
unsigned short var_11 = (unsigned short)63075;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)25001;
int var_14 = -1615358731;
unsigned int var_15 = 2779775160U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
