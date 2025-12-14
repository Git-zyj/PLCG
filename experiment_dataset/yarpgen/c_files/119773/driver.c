#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5847286912703502555ULL;
_Bool var_1 = (_Bool)1;
int var_3 = -1784726664;
unsigned long long int var_5 = 476686984868090424ULL;
signed char var_6 = (signed char)-127;
_Bool var_7 = (_Bool)0;
long long int var_9 = -6706656761737584161LL;
_Bool var_10 = (_Bool)0;
int var_12 = 286827002;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)112;
long long int var_16 = 3263655609869217807LL;
int zero = 0;
long long int var_17 = -3751318556621415370LL;
unsigned long long int var_18 = 544103481854279625ULL;
void init() {
}

void checksum() {
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
