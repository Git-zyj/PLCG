#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
signed char var_1 = (signed char)-69;
unsigned int var_2 = 3584364925U;
unsigned char var_6 = (unsigned char)72;
short var_7 = (short)1124;
signed char var_9 = (signed char)-92;
unsigned char var_10 = (unsigned char)44;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 547926813994473862ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
