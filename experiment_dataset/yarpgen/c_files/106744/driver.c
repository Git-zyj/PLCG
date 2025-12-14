#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2071945047475230834ULL;
_Bool var_1 = (_Bool)1;
long long int var_3 = -8301679831581915990LL;
short var_10 = (short)-12524;
signed char var_14 = (signed char)100;
long long int var_15 = 7346600442267324250LL;
unsigned short var_16 = (unsigned short)29731;
int zero = 0;
unsigned short var_17 = (unsigned short)16125;
int var_18 = 627221015;
unsigned long long int var_19 = 2843143659154752831ULL;
unsigned char var_20 = (unsigned char)10;
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
