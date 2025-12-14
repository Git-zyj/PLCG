#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16728819222628674506ULL;
signed char var_2 = (signed char)22;
long long int var_4 = -7596105455702141120LL;
long long int var_5 = 5962648031378911038LL;
long long int var_6 = 8368051194629095061LL;
signed char var_7 = (signed char)-88;
long long int var_9 = 1547692059388346641LL;
long long int var_10 = -2365685961254111641LL;
long long int var_12 = -1362348472427532488LL;
int zero = 0;
signed char var_13 = (signed char)53;
signed char var_14 = (signed char)-52;
unsigned long long int var_15 = 6890069767342448695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
