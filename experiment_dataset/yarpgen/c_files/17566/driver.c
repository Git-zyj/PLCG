#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
int var_1 = -1101972352;
signed char var_3 = (signed char)120;
unsigned long long int var_7 = 4663490448184501340ULL;
signed char var_12 = (signed char)40;
int var_16 = -1825978481;
int zero = 0;
signed char var_20 = (signed char)54;
int var_21 = -515400489;
signed char var_22 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
