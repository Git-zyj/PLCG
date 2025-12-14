#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7118;
unsigned long long int var_2 = 12441387658918359198ULL;
unsigned long long int var_3 = 14727279392706775480ULL;
signed char var_5 = (signed char)-116;
long long int var_9 = 8407662756382859948LL;
int zero = 0;
unsigned short var_16 = (unsigned short)14552;
int var_17 = -447593474;
unsigned long long int var_18 = 12816215032620298154ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
