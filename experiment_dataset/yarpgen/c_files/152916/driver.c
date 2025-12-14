#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
long long int var_1 = -4394997275953861673LL;
unsigned char var_3 = (unsigned char)177;
long long int var_4 = 62995086764854138LL;
int var_5 = 71885201;
short var_7 = (short)-17453;
unsigned long long int var_8 = 9551630162867794315ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_14 = 7736220614572155949LL;
long long int var_15 = -8048108524564047352LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
