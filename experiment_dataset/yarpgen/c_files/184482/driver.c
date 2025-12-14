#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3877030236U;
long long int var_3 = 8791685680152142330LL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3734641721U;
signed char var_6 = (signed char)9;
unsigned long long int var_7 = 16417095504054509890ULL;
int var_9 = -677137349;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1178387022;
long long int var_12 = -1309312671694787047LL;
unsigned int var_13 = 845107211U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
