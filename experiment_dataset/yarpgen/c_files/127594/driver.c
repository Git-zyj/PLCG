#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1948268779;
long long int var_3 = -4933001112794996520LL;
unsigned int var_4 = 1009974709U;
long long int var_8 = -2798495704962901952LL;
unsigned char var_9 = (unsigned char)206;
int zero = 0;
unsigned short var_19 = (unsigned short)986;
long long int var_20 = -644112608320395767LL;
unsigned int var_21 = 166354078U;
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
