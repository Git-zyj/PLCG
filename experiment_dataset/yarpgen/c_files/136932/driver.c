#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 804487171595783643ULL;
long long int var_1 = 1667199213058200701LL;
signed char var_3 = (signed char)98;
unsigned char var_7 = (unsigned char)250;
int zero = 0;
unsigned long long int var_11 = 4637015034646773349ULL;
long long int var_12 = -387713562387554676LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
