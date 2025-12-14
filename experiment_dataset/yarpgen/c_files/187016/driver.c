#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 419293581757046007ULL;
unsigned char var_10 = (unsigned char)130;
unsigned long long int var_11 = 2967851957183493405ULL;
long long int var_12 = -1189159605721512759LL;
int zero = 0;
unsigned int var_19 = 566847100U;
unsigned long long int var_20 = 8356873944581422802ULL;
long long int var_21 = -6459048351040113586LL;
short var_22 = (short)-10514;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
