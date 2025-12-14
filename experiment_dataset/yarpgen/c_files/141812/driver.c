#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -144900553;
int var_5 = 1146533439;
long long int var_9 = 4133591570873915816LL;
int zero = 0;
signed char var_20 = (signed char)-21;
unsigned long long int var_21 = 5343006898148868901ULL;
int var_22 = -723912391;
void init() {
}

void checksum() {
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
