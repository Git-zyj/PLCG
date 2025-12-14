#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-29;
unsigned int var_7 = 3887145306U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)117;
unsigned short var_11 = (unsigned short)16543;
int zero = 0;
signed char var_17 = (signed char)47;
unsigned char var_18 = (unsigned char)200;
long long int var_19 = 5617662545322113707LL;
void init() {
}

void checksum() {
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
