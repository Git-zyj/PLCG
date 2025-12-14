#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 5969087144459222674ULL;
short var_4 = (short)-15188;
unsigned char var_9 = (unsigned char)189;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -498282647;
unsigned int var_12 = 1238526168U;
unsigned long long int var_13 = 13051368584590703535ULL;
signed char var_14 = (signed char)51;
void init() {
}

void checksum() {
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
