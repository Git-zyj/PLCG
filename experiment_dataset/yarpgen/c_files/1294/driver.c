#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2482426505U;
unsigned short var_2 = (unsigned short)11364;
unsigned char var_6 = (unsigned char)213;
signed char var_7 = (signed char)-77;
long long int var_11 = -74032486115430099LL;
int zero = 0;
unsigned long long int var_13 = 12932569573968574272ULL;
signed char var_14 = (signed char)-13;
signed char var_15 = (signed char)-43;
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
