#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
_Bool var_1 = (_Bool)1;
unsigned short var_6 = (unsigned short)4982;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)39246;
unsigned short var_16 = (unsigned short)49093;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-118;
unsigned short var_19 = (unsigned short)53945;
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
