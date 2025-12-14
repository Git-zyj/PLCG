#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7762774212136707713LL;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 3193190243U;
unsigned int var_9 = 130942250U;
int zero = 0;
long long int var_10 = 4534165428992772764LL;
unsigned int var_11 = 3925292723U;
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
