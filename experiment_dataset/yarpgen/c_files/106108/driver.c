#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned int var_2 = 2541126701U;
unsigned long long int var_8 = 9740523604773251660ULL;
signed char var_9 = (signed char)25;
unsigned char var_11 = (unsigned char)31;
unsigned short var_15 = (unsigned short)64360;
int zero = 0;
signed char var_17 = (signed char)-61;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
