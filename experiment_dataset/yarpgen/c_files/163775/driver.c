#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1669137525U;
unsigned int var_6 = 3535614574U;
unsigned int var_9 = 302995248U;
int zero = 0;
unsigned int var_17 = 729435108U;
unsigned int var_18 = 312446384U;
unsigned int var_19 = 1752487122U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
