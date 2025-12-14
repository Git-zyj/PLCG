#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)66;
unsigned long long int var_8 = 3250124518074759911ULL;
unsigned long long int var_9 = 2968424954807469235ULL;
short var_13 = (short)-13401;
long long int var_17 = 492382777254814817LL;
int zero = 0;
unsigned long long int var_19 = 14760723809686307119ULL;
long long int var_20 = 8410159682454166815LL;
unsigned char var_21 = (unsigned char)168;
unsigned int var_22 = 1516313415U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
