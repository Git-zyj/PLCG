#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1406068812;
signed char var_9 = (signed char)110;
long long int var_12 = -4228189340799992340LL;
long long int var_14 = -4809488939303507908LL;
int zero = 0;
unsigned long long int var_20 = 11868257057886580198ULL;
unsigned char var_21 = (unsigned char)145;
long long int var_22 = -4274625797876253862LL;
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
