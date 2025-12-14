#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
signed char var_1 = (signed char)60;
unsigned char var_7 = (unsigned char)230;
unsigned char var_8 = (unsigned char)174;
unsigned long long int var_10 = 15526160494474320390ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)36608;
long long int var_20 = 6073319324426398273LL;
signed char var_21 = (signed char)-61;
unsigned char var_22 = (unsigned char)220;
unsigned int var_23 = 2317587505U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
