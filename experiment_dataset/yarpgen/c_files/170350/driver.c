#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8185011252988313577LL;
unsigned short var_3 = (unsigned short)41039;
unsigned short var_4 = (unsigned short)33631;
signed char var_5 = (signed char)-77;
unsigned short var_8 = (unsigned short)61266;
signed char var_9 = (signed char)125;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
int var_14 = 1545315468;
short var_15 = (short)25000;
unsigned short var_16 = (unsigned short)54338;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
