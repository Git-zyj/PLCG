#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5152105063664211100ULL;
long long int var_4 = 4673989416136642494LL;
unsigned int var_6 = 3902019768U;
unsigned char var_7 = (unsigned char)246;
unsigned char var_8 = (unsigned char)23;
unsigned char var_9 = (unsigned char)180;
long long int var_11 = 4304758606020416852LL;
unsigned int var_12 = 3706956377U;
unsigned int var_14 = 451671646U;
unsigned char var_15 = (unsigned char)91;
int zero = 0;
long long int var_18 = -5665777456598581450LL;
unsigned char var_19 = (unsigned char)30;
int var_20 = -410679521;
long long int var_21 = -8454949463522750665LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
