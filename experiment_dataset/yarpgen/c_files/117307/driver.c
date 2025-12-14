#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5673056642080598549LL;
_Bool var_4 = (_Bool)0;
long long int var_7 = -3837898020022274232LL;
short var_8 = (short)-4630;
signed char var_9 = (signed char)-55;
short var_10 = (short)-25469;
int zero = 0;
unsigned long long int var_13 = 11978923030227103073ULL;
signed char var_14 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
