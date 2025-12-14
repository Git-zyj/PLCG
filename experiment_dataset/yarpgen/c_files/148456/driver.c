#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12009045937868401389ULL;
short var_3 = (short)31138;
int var_4 = -1350228104;
int var_6 = 1584276393;
short var_10 = (short)-23663;
short var_11 = (short)-31582;
unsigned int var_14 = 1653581773U;
int zero = 0;
unsigned long long int var_18 = 3865216709187229972ULL;
int var_19 = -358271670;
unsigned int var_20 = 1318018221U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
