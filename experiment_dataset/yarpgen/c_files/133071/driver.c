#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)17;
long long int var_7 = -8393502182868977991LL;
int var_9 = -1083367307;
unsigned char var_12 = (unsigned char)68;
int zero = 0;
signed char var_18 = (signed char)95;
unsigned char var_19 = (unsigned char)133;
long long int var_20 = -1575034891166031833LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
