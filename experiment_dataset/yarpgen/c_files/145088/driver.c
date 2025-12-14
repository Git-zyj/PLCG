#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7901598626022568901ULL;
unsigned long long int var_6 = 4451608700316523215ULL;
short var_8 = (short)23082;
int zero = 0;
signed char var_12 = (signed char)-57;
short var_13 = (short)31721;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
