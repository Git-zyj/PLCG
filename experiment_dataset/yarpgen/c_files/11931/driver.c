#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1658819308;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)74;
unsigned long long int var_5 = 2715642726310523694ULL;
unsigned long long int var_8 = 10807804553975636305ULL;
int var_9 = -1128508212;
long long int var_10 = -3872910433243491062LL;
int zero = 0;
long long int var_14 = -8853708027808705396LL;
unsigned short var_15 = (unsigned short)51677;
long long int var_16 = -4897136945763335996LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
