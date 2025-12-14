#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8471413395772812108ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3017737092U;
signed char var_8 = (signed char)114;
short var_9 = (short)-1681;
int zero = 0;
signed char var_11 = (signed char)-104;
unsigned short var_12 = (unsigned short)52310;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
