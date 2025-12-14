#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1848452283U;
long long int var_3 = 5730424952192101963LL;
unsigned long long int var_6 = 11888552786538428668ULL;
signed char var_8 = (signed char)81;
int zero = 0;
short var_17 = (short)18465;
unsigned int var_18 = 487026092U;
unsigned int var_19 = 2273400492U;
signed char var_20 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
