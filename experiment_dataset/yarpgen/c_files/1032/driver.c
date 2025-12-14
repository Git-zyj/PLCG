#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-30;
long long int var_6 = 815700450584946636LL;
long long int var_7 = -1280250839797205044LL;
unsigned char var_9 = (unsigned char)189;
unsigned int var_11 = 3810266464U;
int zero = 0;
signed char var_15 = (signed char)20;
long long int var_16 = 7287010158605915514LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
