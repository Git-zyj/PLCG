#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned int var_1 = 4033408647U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3636982665U;
unsigned long long int var_11 = 9022683117088427260ULL;
unsigned char var_12 = (unsigned char)5;
int var_13 = -1158948781;
int zero = 0;
unsigned short var_16 = (unsigned short)39416;
short var_17 = (short)-30954;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-16091;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
