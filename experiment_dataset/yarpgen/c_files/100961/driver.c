#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-74;
unsigned char var_2 = (unsigned char)169;
unsigned long long int var_4 = 10614085694755267895ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 7475074915300430921ULL;
int zero = 0;
unsigned int var_14 = 4013153698U;
short var_15 = (short)-6373;
void init() {
}

void checksum() {
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
