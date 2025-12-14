#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6541394312531552570LL;
signed char var_5 = (signed char)-34;
long long int var_6 = 8143457615181105976LL;
unsigned int var_12 = 3458031745U;
unsigned int var_19 = 3905144754U;
int zero = 0;
long long int var_20 = 1828389784049844584LL;
short var_21 = (short)-13441;
int var_22 = 244129086;
void init() {
}

void checksum() {
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
