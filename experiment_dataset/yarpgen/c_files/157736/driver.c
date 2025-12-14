#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
unsigned long long int var_9 = 8491726752232300084ULL;
unsigned long long int var_13 = 15434182465136206069ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = -1345882079;
int var_20 = 1864447144;
void init() {
}

void checksum() {
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
