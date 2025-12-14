#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5265056726074965681LL;
short var_9 = (short)-8540;
unsigned char var_13 = (unsigned char)164;
signed char var_15 = (signed char)-51;
long long int var_16 = -79961448835705638LL;
int zero = 0;
signed char var_17 = (signed char)50;
unsigned char var_18 = (unsigned char)161;
short var_19 = (short)-31601;
int var_20 = 1713308621;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
