#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 70743426918063474LL;
long long int var_7 = 7746801976709038844LL;
short var_8 = (short)-31407;
unsigned long long int var_9 = 9297192954502509314ULL;
long long int var_10 = -5275788307076420835LL;
short var_11 = (short)7948;
int zero = 0;
short var_18 = (short)-30696;
unsigned int var_19 = 22723436U;
unsigned short var_20 = (unsigned short)24170;
unsigned long long int var_21 = 17038981433146641928ULL;
short var_22 = (short)29410;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
