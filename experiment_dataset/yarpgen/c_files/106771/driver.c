#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
int var_3 = -1748296992;
int var_5 = -1064897803;
unsigned short var_7 = (unsigned short)11257;
signed char var_8 = (signed char)124;
unsigned char var_9 = (unsigned char)31;
unsigned int var_12 = 3891051997U;
signed char var_15 = (signed char)-53;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)110;
long long int var_20 = 5030085081041086846LL;
int var_21 = 1217560867;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
