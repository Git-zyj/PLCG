#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 654867094U;
short var_3 = (short)4312;
unsigned int var_4 = 2648950409U;
unsigned short var_5 = (unsigned short)27401;
unsigned short var_8 = (unsigned short)25528;
long long int var_10 = 5029042661760855953LL;
int zero = 0;
long long int var_12 = -3387088693251304415LL;
unsigned long long int var_13 = 8548781740303745923ULL;
signed char var_14 = (signed char)-60;
unsigned int var_15 = 3432801611U;
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
