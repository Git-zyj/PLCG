#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14106610391507336890ULL;
short var_6 = (short)5283;
unsigned long long int var_7 = 11448375375544448039ULL;
short var_8 = (short)-16557;
unsigned long long int var_9 = 1579447430737601ULL;
unsigned short var_11 = (unsigned short)34612;
int zero = 0;
signed char var_13 = (signed char)81;
long long int var_14 = 3916450469433187437LL;
long long int var_15 = 1182540317458076011LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
