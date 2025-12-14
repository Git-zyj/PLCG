#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3115380862U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_3 = -226288556;
unsigned long long int var_4 = 16126811841975187791ULL;
_Bool var_5 = (_Bool)0;
int var_13 = 791761716;
int var_14 = -1777569596;
int var_15 = -1968251332;
int zero = 0;
long long int var_19 = 72642912138969391LL;
unsigned long long int var_20 = 105773295697516356ULL;
short var_21 = (short)6279;
short var_22 = (short)15780;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
