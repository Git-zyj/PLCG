#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1013036367;
int var_5 = -1234463963;
int var_7 = 87659148;
short var_8 = (short)-19047;
unsigned char var_9 = (unsigned char)145;
unsigned int var_11 = 2892504148U;
long long int var_18 = 4184220675644047336LL;
int zero = 0;
long long int var_20 = -5909204078721578301LL;
long long int var_21 = -4274366285554843024LL;
signed char var_22 = (signed char)-75;
unsigned long long int var_23 = 9030538664343243378ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
