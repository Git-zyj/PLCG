#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
signed char var_1 = (signed char)-103;
unsigned short var_6 = (unsigned short)1259;
unsigned char var_10 = (unsigned char)51;
int zero = 0;
int var_12 = 68380454;
int var_13 = -1376279114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
