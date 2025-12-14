#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)20737;
int zero = 0;
unsigned char var_18 = (unsigned char)127;
unsigned long long int var_19 = 3044720407049573581ULL;
unsigned long long int var_20 = 4278251617508801979ULL;
unsigned long long int var_21 = 9170035287809285419ULL;
void init() {
}

void checksum() {
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
