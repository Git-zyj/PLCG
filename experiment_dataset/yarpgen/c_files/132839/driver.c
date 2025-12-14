#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
unsigned long long int var_2 = 2810656040155404707ULL;
unsigned int var_3 = 2066220595U;
short var_5 = (short)109;
short var_10 = (short)-24208;
unsigned int var_13 = 3035915719U;
long long int var_14 = -7462180382811029122LL;
long long int var_17 = -1404869866726020692LL;
short var_18 = (short)-27249;
long long int var_19 = 7413647996085877615LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1325969083715340265LL;
short var_22 = (short)31880;
unsigned int var_23 = 1055061326U;
long long int var_24 = -9127048261259662391LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
