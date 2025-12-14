#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25217;
int var_3 = -728973380;
unsigned int var_4 = 128032413U;
long long int var_14 = -101528104258550704LL;
short var_18 = (short)17467;
int zero = 0;
int var_20 = 426127399;
unsigned long long int var_21 = 16648521181027684475ULL;
short var_22 = (short)15405;
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
