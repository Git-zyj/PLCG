#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16528;
long long int var_7 = -6139212175666426362LL;
long long int var_9 = 8673844456102077654LL;
unsigned char var_11 = (unsigned char)162;
long long int var_13 = 8724707717547107454LL;
int zero = 0;
int var_17 = -853192708;
signed char var_18 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
