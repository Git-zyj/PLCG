#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6454896480180252241ULL;
unsigned char var_5 = (unsigned char)109;
int var_8 = -1036621970;
signed char var_9 = (signed char)57;
signed char var_11 = (signed char)127;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)17;
int zero = 0;
unsigned char var_15 = (unsigned char)237;
signed char var_16 = (signed char)-54;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)104;
signed char var_19 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
