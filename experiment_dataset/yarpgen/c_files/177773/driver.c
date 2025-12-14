#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7980046733678511686LL;
signed char var_5 = (signed char)73;
unsigned long long int var_6 = 14220649232063408756ULL;
long long int var_7 = 2391646254761123317LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2735141557674152910LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_18 = (short)7183;
long long int var_19 = -2812147372775562417LL;
void init() {
}

void checksum() {
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
