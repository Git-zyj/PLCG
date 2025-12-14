#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8478519309892950205LL;
signed char var_6 = (signed char)-76;
unsigned short var_7 = (unsigned short)38253;
unsigned short var_12 = (unsigned short)20414;
long long int var_13 = 1311301265696660565LL;
unsigned char var_14 = (unsigned char)79;
int zero = 0;
short var_19 = (short)-20778;
long long int var_20 = 171270768594881916LL;
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
