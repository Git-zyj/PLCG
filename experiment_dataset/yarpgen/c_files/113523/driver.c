#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
signed char var_4 = (signed char)-74;
unsigned long long int var_5 = 15184224069964501193ULL;
short var_12 = (short)-9543;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-106;
signed char var_21 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
