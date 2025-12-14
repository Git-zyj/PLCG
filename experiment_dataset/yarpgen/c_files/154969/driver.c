#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 496219660422561894LL;
unsigned short var_1 = (unsigned short)25139;
short var_2 = (short)25052;
unsigned short var_3 = (unsigned short)25024;
long long int var_7 = 4396577261438736816LL;
long long int var_10 = 2118001765954619564LL;
signed char var_18 = (signed char)62;
int zero = 0;
long long int var_19 = 118570707625291297LL;
unsigned int var_20 = 539856670U;
signed char var_21 = (signed char)57;
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
