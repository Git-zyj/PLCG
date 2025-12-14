#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1105226594;
int var_1 = -1584020289;
int var_3 = -383578273;
unsigned long long int var_6 = 9480651412353365004ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3732855332U;
unsigned long long int var_9 = 6028894249022811412ULL;
int zero = 0;
int var_10 = -1603391988;
unsigned int var_11 = 1649315881U;
unsigned long long int var_12 = 9470234024757030828ULL;
long long int var_13 = 8595897053721746361LL;
unsigned short var_14 = (unsigned short)50780;
long long int var_15 = -4059402893076885694LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
