#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2391;
unsigned long long int var_4 = 10809819374044851670ULL;
unsigned char var_5 = (unsigned char)171;
long long int var_7 = -651399050764134790LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 9948702775940840356ULL;
int zero = 0;
short var_11 = (short)-30735;
signed char var_12 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
