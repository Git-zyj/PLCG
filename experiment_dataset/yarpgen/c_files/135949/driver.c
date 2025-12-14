#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1162665915219809721LL;
long long int var_2 = -7920088713288326965LL;
short var_4 = (short)21469;
_Bool var_15 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-13;
short var_20 = (short)-26042;
long long int var_21 = 4663141692489328506LL;
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
