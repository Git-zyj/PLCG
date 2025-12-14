#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37466;
int var_5 = 242719841;
unsigned long long int var_7 = 17526467726937700342ULL;
unsigned int var_9 = 2320830407U;
int zero = 0;
short var_12 = (short)-10152;
unsigned short var_13 = (unsigned short)2888;
int var_14 = -756250580;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
