#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32213;
short var_2 = (short)10904;
unsigned int var_4 = 514156806U;
unsigned char var_9 = (unsigned char)197;
signed char var_13 = (signed char)8;
unsigned char var_15 = (unsigned char)121;
int zero = 0;
int var_20 = 1306864503;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 557366534U;
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
