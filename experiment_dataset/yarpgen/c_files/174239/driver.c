#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 356640038U;
unsigned long long int var_1 = 2387301325734638927ULL;
unsigned short var_4 = (unsigned short)29075;
unsigned long long int var_6 = 9406844887182010618ULL;
int zero = 0;
unsigned long long int var_10 = 14878790562383201892ULL;
long long int var_11 = -1586001201715164925LL;
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
