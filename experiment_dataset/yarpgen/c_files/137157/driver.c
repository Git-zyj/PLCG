#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11657333565911242934ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1387368732662722469LL;
int var_9 = -147657390;
unsigned long long int var_14 = 17305546450782840956ULL;
int zero = 0;
unsigned long long int var_19 = 8088183376809588841ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 381597898971149694LL;
unsigned long long int var_22 = 17997715675997398780ULL;
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
