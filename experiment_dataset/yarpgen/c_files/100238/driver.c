#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
signed char var_6 = (signed char)-72;
short var_12 = (short)-10430;
int var_15 = 2011371300;
signed char var_17 = (signed char)-45;
int zero = 0;
unsigned short var_18 = (unsigned short)15377;
signed char var_19 = (signed char)-39;
int var_20 = -1395428653;
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
