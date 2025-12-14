#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3169590686586216913ULL;
long long int var_4 = -6881064205931699124LL;
short var_9 = (short)13920;
unsigned char var_11 = (unsigned char)231;
long long int var_12 = 356813813046240890LL;
short var_18 = (short)15720;
int zero = 0;
long long int var_19 = -2250638121819013875LL;
unsigned long long int var_20 = 8366882157850074235ULL;
long long int var_21 = 4909120709604816426LL;
unsigned int var_22 = 1726273887U;
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
