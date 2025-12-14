#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1412298425;
signed char var_3 = (signed char)-111;
unsigned char var_5 = (unsigned char)36;
short var_9 = (short)-24655;
short var_10 = (short)29622;
int var_17 = -279290153;
int zero = 0;
unsigned int var_18 = 1659361764U;
signed char var_19 = (signed char)-57;
long long int var_20 = 3644157560597106919LL;
long long int var_21 = 7254989012543984177LL;
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
