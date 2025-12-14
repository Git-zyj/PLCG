#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9450;
unsigned char var_1 = (unsigned char)121;
unsigned int var_4 = 3325849190U;
int var_6 = 1095007944;
unsigned int var_7 = 3098993428U;
long long int var_8 = 2841323628804481443LL;
long long int var_9 = -988500852723000011LL;
int zero = 0;
short var_10 = (short)-29318;
short var_11 = (short)11621;
signed char var_12 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
