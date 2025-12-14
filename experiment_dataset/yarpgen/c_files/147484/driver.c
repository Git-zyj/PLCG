#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9487816057524303431ULL;
unsigned int var_5 = 354858913U;
unsigned short var_6 = (unsigned short)21362;
unsigned short var_9 = (unsigned short)55151;
int zero = 0;
long long int var_10 = 3713910363679669776LL;
int var_11 = -972080294;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
