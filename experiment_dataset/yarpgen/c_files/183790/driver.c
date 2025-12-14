#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10527;
short var_1 = (short)-4917;
short var_2 = (short)-21275;
unsigned long long int var_6 = 11774151692326135310ULL;
unsigned int var_7 = 2431074078U;
unsigned int var_8 = 3930769599U;
unsigned int var_9 = 2033505466U;
int zero = 0;
unsigned int var_10 = 3936908222U;
unsigned long long int var_11 = 8105696888718371745ULL;
short var_12 = (short)-454;
unsigned long long int var_13 = 2616623999313252987ULL;
unsigned int var_14 = 2288855734U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
