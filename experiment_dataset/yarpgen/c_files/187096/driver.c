#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3256082150830339259LL;
unsigned int var_4 = 2755251571U;
signed char var_9 = (signed char)-19;
short var_11 = (short)-7345;
unsigned short var_12 = (unsigned short)64246;
unsigned char var_18 = (unsigned char)204;
int zero = 0;
short var_19 = (short)-4942;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
