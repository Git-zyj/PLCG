#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 3878986180U;
unsigned long long int var_12 = 11004289516839981699ULL;
long long int var_17 = -7783520196301364567LL;
int zero = 0;
unsigned int var_19 = 3852108848U;
signed char var_20 = (signed char)-47;
unsigned long long int var_21 = 9521759383086106947ULL;
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
