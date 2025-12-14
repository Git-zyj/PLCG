#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2605970594U;
int var_2 = 1572447570;
int var_3 = -1732246556;
long long int var_8 = -3625890082319817128LL;
int var_9 = -190378067;
unsigned int var_10 = 2335103695U;
unsigned int var_12 = 3098935698U;
int var_14 = -159648837;
int zero = 0;
short var_17 = (short)25984;
long long int var_18 = 8296115346830003509LL;
int var_19 = 535454315;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
