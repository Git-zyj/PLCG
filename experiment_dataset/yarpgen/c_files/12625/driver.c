#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6606414895313918859LL;
unsigned long long int var_11 = 4349746455705608942ULL;
signed char var_18 = (signed char)-20;
unsigned int var_19 = 3282506060U;
int zero = 0;
long long int var_20 = -1132271147398014473LL;
signed char var_21 = (signed char)18;
void init() {
}

void checksum() {
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
