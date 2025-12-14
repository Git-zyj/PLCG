#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17481047785595324777ULL;
short var_3 = (short)-19209;
long long int var_7 = -7119497204668051609LL;
long long int var_9 = 7405090039570074984LL;
signed char var_12 = (signed char)-2;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
