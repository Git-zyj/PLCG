#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 255852480;
unsigned long long int var_2 = 4902225166690767511ULL;
unsigned long long int var_3 = 14480274821279647530ULL;
unsigned int var_5 = 1097700618U;
signed char var_8 = (signed char)121;
unsigned int var_9 = 3098626893U;
unsigned long long int var_12 = 1699063844795335173ULL;
int zero = 0;
signed char var_19 = (signed char)127;
_Bool var_20 = (_Bool)0;
short var_21 = (short)25996;
void init() {
}

void checksum() {
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
