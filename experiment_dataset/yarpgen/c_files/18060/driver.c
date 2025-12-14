#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5419933840311273976LL;
long long int var_7 = 8361483499381518016LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)29;
int var_14 = -529301135;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)32;
unsigned int var_21 = 4060022063U;
unsigned char var_22 = (unsigned char)137;
unsigned long long int var_23 = 9802238231908863250ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
