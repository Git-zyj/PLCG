#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3664;
unsigned char var_1 = (unsigned char)163;
short var_2 = (short)-15342;
long long int var_3 = 7916625488382181275LL;
short var_4 = (short)-31548;
unsigned int var_6 = 4141787981U;
int var_8 = 475857849;
unsigned int var_9 = 2954242965U;
int zero = 0;
signed char var_10 = (signed char)127;
unsigned long long int var_11 = 9610813821424035543ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
