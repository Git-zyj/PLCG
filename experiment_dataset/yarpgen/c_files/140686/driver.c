#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1172352193;
unsigned short var_3 = (unsigned short)24062;
signed char var_6 = (signed char)-73;
unsigned char var_9 = (unsigned char)69;
long long int var_11 = 2579480898705056968LL;
short var_12 = (short)27537;
int zero = 0;
unsigned long long int var_15 = 9997029778972904826ULL;
long long int var_16 = -7443719592273776430LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
