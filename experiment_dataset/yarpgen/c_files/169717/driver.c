#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 999628262U;
int var_1 = -1161490046;
unsigned long long int var_7 = 16375244690026040875ULL;
short var_8 = (short)25794;
unsigned int var_9 = 1527898953U;
unsigned int var_13 = 3276257371U;
int zero = 0;
unsigned char var_18 = (unsigned char)155;
short var_19 = (short)30170;
signed char var_20 = (signed char)83;
void init() {
}

void checksum() {
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
