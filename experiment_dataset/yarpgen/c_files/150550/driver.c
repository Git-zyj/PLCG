#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 9033423323821291386ULL;
unsigned char var_11 = (unsigned char)59;
int zero = 0;
int var_17 = -1536616788;
unsigned long long int var_18 = 17312059564060963349ULL;
unsigned long long int var_19 = 7244970290357252511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
