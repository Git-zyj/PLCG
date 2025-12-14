#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -121494679763559677LL;
int var_2 = -1257157812;
unsigned long long int var_4 = 14663862935779545838ULL;
int var_5 = 1276845171;
unsigned short var_6 = (unsigned short)47408;
signed char var_8 = (signed char)-56;
long long int var_9 = -5387846157590912178LL;
int zero = 0;
long long int var_17 = -2583121256422423499LL;
unsigned long long int var_18 = 3181827088756779083ULL;
short var_19 = (short)-14189;
short var_20 = (short)-21879;
int var_21 = -1845904852;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
