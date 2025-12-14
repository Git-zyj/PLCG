#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6998923828919736486ULL;
unsigned long long int var_1 = 1481539023387095267ULL;
unsigned short var_2 = (unsigned short)19590;
long long int var_4 = 2889760237085430437LL;
unsigned short var_8 = (unsigned short)34447;
short var_9 = (short)31;
int zero = 0;
long long int var_10 = 7071311072264871641LL;
signed char var_11 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
