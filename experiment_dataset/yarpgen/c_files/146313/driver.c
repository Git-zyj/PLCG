#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10545929043726109923ULL;
long long int var_10 = 8494913062015287063LL;
unsigned long long int var_11 = 8477042611442224527ULL;
signed char var_13 = (signed char)70;
signed char var_15 = (signed char)-98;
long long int var_16 = 6778901463096197415LL;
int zero = 0;
unsigned char var_18 = (unsigned char)223;
int var_19 = 413189440;
void init() {
}

void checksum() {
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
