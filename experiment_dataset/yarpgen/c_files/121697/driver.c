#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
int var_2 = -63500415;
unsigned char var_3 = (unsigned char)85;
short var_4 = (short)-15237;
int var_7 = 1854125110;
unsigned char var_9 = (unsigned char)112;
int var_10 = -77455128;
int var_11 = 925009545;
unsigned long long int var_15 = 605148877972638369ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -9111009122161787718LL;
short var_21 = (short)18116;
long long int var_22 = -685362575838646011LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
