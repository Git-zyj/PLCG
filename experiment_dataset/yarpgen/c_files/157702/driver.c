#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-93;
unsigned long long int var_5 = 10506459730309701196ULL;
signed char var_9 = (signed char)32;
short var_10 = (short)10920;
unsigned long long int var_16 = 3590557858398342348ULL;
long long int var_17 = 3000728961961980823LL;
signed char var_19 = (signed char)-93;
int zero = 0;
unsigned short var_20 = (unsigned short)54800;
signed char var_21 = (signed char)-15;
unsigned long long int var_22 = 13780530490754803083ULL;
long long int var_23 = 3636522683029865953LL;
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
