#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17027369659479925344ULL;
short var_8 = (short)4538;
unsigned int var_11 = 1957693063U;
int var_15 = 489023200;
int zero = 0;
short var_18 = (short)13402;
unsigned long long int var_19 = 1290959864689436511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
