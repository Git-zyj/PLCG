#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5155092996057544972ULL;
unsigned short var_2 = (unsigned short)51281;
unsigned int var_4 = 3424492650U;
unsigned short var_5 = (unsigned short)62021;
int zero = 0;
signed char var_11 = (signed char)39;
unsigned char var_12 = (unsigned char)121;
signed char var_13 = (signed char)51;
int var_14 = 1592139677;
long long int var_15 = 2427447844344467947LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
