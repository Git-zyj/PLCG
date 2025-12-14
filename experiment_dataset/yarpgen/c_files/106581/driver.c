#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20747;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 1701402362U;
long long int var_10 = 6842698863541596464LL;
int zero = 0;
short var_11 = (short)4373;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)40888;
long long int var_14 = 4653746188284532052LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
