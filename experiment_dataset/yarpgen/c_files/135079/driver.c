#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21044;
long long int var_2 = 6611881344234299746LL;
long long int var_6 = 1753498307641528761LL;
unsigned short var_9 = (unsigned short)37757;
int zero = 0;
long long int var_11 = 4480789819802362500LL;
long long int var_12 = 92309966226827130LL;
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
