#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1010507460855440305ULL;
unsigned long long int var_2 = 9351920799986198356ULL;
unsigned int var_3 = 1415257861U;
long long int var_4 = -8228892251279460687LL;
long long int var_5 = -8777779080041799167LL;
unsigned long long int var_7 = 15690089608214233726ULL;
unsigned int var_9 = 3047675150U;
unsigned char var_11 = (unsigned char)126;
long long int var_12 = 1338117810086610724LL;
unsigned long long int var_14 = 14227031973756479141ULL;
unsigned long long int var_15 = 14639609041683555113ULL;
long long int var_16 = 7873026123904214129LL;
int zero = 0;
signed char var_17 = (signed char)-79;
unsigned int var_18 = 2585645992U;
unsigned long long int var_19 = 12007964879218854514ULL;
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
